#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // Process each test case
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the number of odd and even indexed episodes
        int odd_count = (N + 1) / 2;  // Odd indexed episodes (1, 3, 5, ...)
        int even_count = N / 2;       // Even indexed episodes (2, 4, 6, ...)
        
        // Total duration calculation
        int total_duration = odd_count * B + even_count * A;
        
        // Output the result for the current test case
        printf("%d\n", total_duration);
    }
    
    return 0;
}