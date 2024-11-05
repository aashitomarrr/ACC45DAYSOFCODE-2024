#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read the two numbers A and B
        
        int C = 21 - (A + B);  // Calculate the required third number
        
        // Check if C is between 1 and 10 inclusive
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);  // Print the third number
        } else {
            printf("-1\n");  // Impossible to win, so output -1
        }
    }
    
    return 0;
}
