#include <stdio.h>

int main() {
    int N;
    
    // Read the input value for N
    scanf("%d", &N);
    
    // Check if N is divisible by 4
    if (N % 4 == 0) {
        // If divisible by 4, increment N by 1
        N++;
    } else {
        // Otherwise, decrement N by 1
        N--;
    }
    
    // Output the modified value of N
    printf("%d\n", N);
    
    return 0;
}