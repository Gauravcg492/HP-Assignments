__kernel void add_array(__global int *a, __global int *b, __global int *c, const unsigned int n) {

    int i = get_global_id(0);
    if(i < n) {
        c[i] = a[i] + b[i];
    }    
}