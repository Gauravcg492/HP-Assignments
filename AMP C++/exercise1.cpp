/*
* Parallel matrix multiplication using C++ amp
*/
#include<iostream>
#include<bits/stdc++.h>
#include<amp.h>
using namespace concurrency;
using namespace std::vector;
using namespace std::cout;


void multiply(vector<vector<int>>& a, vector<vector<int>>& b, vector<vector<int>>& c, int n)
{
    array_view<const int, 2> d_a(n, n, a);
    array_view<const int, 2> d_b(n, n, b);
    array_view<int, 2> d_c(n, n, c);

    parallel_for_each(
        d_c.extent,
        [=](index<2> idx) restrict(amp) {
            int row = idx[0];
            int col = idx[1];
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += a(row,i) * b(i,col);
            }
            d_c[idx] = sum;
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
    if(argc > 1) {
        n = atoi(argv[1]);
    } else {
        n = 8;
    }
    vector<vector<int>> h_a(n,vector<int>(n,5)); // init all elements to 5
    vector<vector<int>> h_b(n,vector<int>(n,3)); // init all elements to 3
    vector<vector<int>> h_c(n,vector<int>(n,0)); // init all elements to 0

    multiply(a,b,c,n);

    return 0;    
}