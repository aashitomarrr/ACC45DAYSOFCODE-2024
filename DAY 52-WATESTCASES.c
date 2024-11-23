#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the number of test cases for this input
        
        int S[N];  // Array to store sizes of the test cases
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]);  // Read the size of each test case
        }
        
        char V[N + 1];  // Binary string V of size N (plus null terminator)
        scanf("%s", V);  // Read the binary string (which indicates pass/fail)
        
        int smallestFailedSize = 101;  // Initialize with a value larger than any possible size (as max size is 100)
        
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') {  // Check if the test case failed
                if (S[i] < smallestFailedSize) {
                    smallestFailedSize = S[i];  // Update smallest failed size
                }
            }
        }
        
        printf("%d\n", smallestFailedSize);  // Output the smallest failed size
    }
    
    return 0;
}