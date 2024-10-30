#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Size of array B
        scanf("%d", &N);
        
        long long *B = (long long *)malloc(N * sizeof(long long)); // Dynamically allocate array B
        for (int i = 0; i < N; i++) {
            scanf("%lld", &B[i]); // Read array B
        }

        // Calculate the sum of elements in B
        long long sumB = 0;
        for (int i = 0; i < N; i++) {
            sumB += B[i];
        }

        // Calculate S as the average adjusted for the size
        long long S = sumB / (N + 1); // S = (B1 + B2 + ... + BN) / (N + 1)

        long long *A = (long long *)malloc(N * sizeof(long long)); // Dynamically allocate array A
        for (int i = 0; i < N; i++) {
            A[i] = B[i] - S; // A[i] = B[i] - S
        }

        // Output the result for the current test case
        for (int i = 0; i < N; i++) {
            printf("%lld", A[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");

        // Free allocated memory
        free(B);
        free(A);
    }

    return 0;
}

