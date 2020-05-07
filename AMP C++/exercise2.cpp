/*
* Parallel matrix multiplication using C++ amp tiles
*/
#include<iostream>
#include<bits/stdc++.h>
#include<amp.h>
#include<time.h>
using namespace concurrency;
using namespace std;


void multiply(vector<vector<int>>& a, vector<vector<int>>& b, vector<vector<int>>& c,const int n,const int tile)
{
    array_view<const int, 2> d_a(n, n, a);
    array_view<const int, 2> d_b(n, n, b);
    array_view<int, 2> d_c(n, n, c);
    d_c.discard_data();
    parallel_for_each(
        d_c.extent.tile<tile,tile>(),
        [=](tiled_index<tile,tile> tidx) restrict(amp) {
            int row = tidx.global[0];
            int col = tidx.global[1];
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += a(row,i) * b(i,col);
            }
            d_c[tidx] = sum;
        }
    );
    d_c.synchronize();
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << d_c(i, j) << " ";
		}
		cout << endl;
	}
}

int main(int argc, char** argv) {
    int n;
    clock_t t;
    if(argc > 1) {
        n = atoi(argv[1]);
    } else {
        n = 64;
    }
    vector<vector<int>> h_a(n,vector<int>(n,5)); // init all elements to 5
    vector<vector<int>> h_b(n,vector<int>(n,3)); // init all elements to 3
    vector<vector<int>> h_c(n,vector<int>(n,0)); // init all elements to 0
    cout<<"Starting Serial Multiplication."<<endl;
    t = clock();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                h_c[i][j] += h_a[i][k] + h_b[k][j];
            }
        }
    }
    t = clock() - t;
    cout<<"Total time taken: "<<(double) t/CLOCKS_PER_SEC<<endl;
    cout<<"Starting with tile 8."<<endl;
    t = clock();
    multiply(a,b,c,n,8);
    t = clock() - t;
    cout<<"Total time taken: "<<(double) t/CLOCKS_PER_SEC<<endl;

    cout<<"Starting with tile 16."<<endl;
    t = clock();
    multiply(a,b,c,n,16);
    t = clock() - t;
    cout<<"Total time taken: "<<(double) t/CLOCKS_PER_SEC<<endl;

    cout<<"Starting with tile 32."<<endl;
    t = clock();
    multiply(a,b,c,n,32);
    t = clock() - t;
    cout<<"Total time taken: "<<(double) t/CLOCKS_PER_SEC<<endl;

    return 0;    
}