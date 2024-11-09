#include <stdio.h>
#include <stdlib.h>

long long max_distance(int N, int M, int *A) {
    long long distance = 0;
    double half_M = M / 2.0; // To decide whether to use M or 1 for max distance
    
    for (int i = 0; i < N; i++) {
        if (A[i] <= half_M) {
            distance += M - A[i];  // Maximize distance by setting B[i] to M
        } else {
            distance += A[i] - 1;  // Maximize distance by setting B[i] to 1
        }
    }
    
    return distance;
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        
        int *A = (int *)malloc(N * sizeof(int));  // Dynamic allocation for array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);  // Read elements of array A
        }
        
        long long result = max_distance(N, M, A);
        printf("%lld\n", result);  // Output the result for the current test case
        
        free(A);  // Free allocated memory for array A
    }
    
    return 0;
}
