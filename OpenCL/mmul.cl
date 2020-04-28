__kernel void multiply(const int n,
                      const __global float* A,
                      const __global float* B,
                      __global float* C) {
    
    // Thread identifiers
    const int row = get_global_id(0); // row
    const int col = get_global_id(1); // col
 
    // Compute a single element (loop over K)
    float acc = 0.0f;
    for (int k=0; k<n; k++) {
        acc += A[k*n + row] * B[col*K + k];
    }
 
    // Store the result
    C[col*N + row] = acc;
}