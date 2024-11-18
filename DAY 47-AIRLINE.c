#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int A, B, C, D, E;
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        // Check all three possible ways to check-in two bags and carry one bag
        int possible = 0;

        // Case 1: Check-in A and B, carry C
        if (A + B <= D && C <= E) {
            possible = 1;
        }

        // Case 2: Check-in A and C, carry B
        if (A + C <= D && B <= E) {
            possible = 1;
        }

        // Case 3: Check-in B and C, carry A
        if (B + C <= D && A <= E) {
            possible = 1;
        }

        // Output the result for the current test case
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}