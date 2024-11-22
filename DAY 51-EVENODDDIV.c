#include <stdio.h>

int main() {
    int T, N;
    
    // Read number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int t = 0; t < T; t++) {
        // Read the value of N
        scanf("%d", &N);
        
        int f = 0, g = 0; // f = number of even divisors, g = number of odd divisors
        
        // Find divisors and classify them as even or odd
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) { // i is a divisor of N
                if (i % 2 == 0) {
                    f++; // Even divisor
                } else {
                    g++; // Odd divisor
                }
            }
        }
        
        // Compare f(N) and g(N) and print the result
        if (f > g) {
            printf("1\n");
        } else if (f == g) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}