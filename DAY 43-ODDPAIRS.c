#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        long long N;
        scanf("%lld", &N);  // Read the value of N
        
        // Calculate the number of odd and even numbers
        long long odd_count = (N + 1) / 2;  // Count of odd numbers from 1 to N
        long long even_count = N / 2;       // Count of even numbers from 1 to N
        
        // The number of valid pairs (odd, even) and (even, odd)
        long long result = 2 * odd_count * even_count;
        
        printf("%lld\n", result);
    }

    return 0;
}