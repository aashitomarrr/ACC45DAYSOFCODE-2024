#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int i = 0; i < T; i++) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Read current score A:B
        scanf("%d %d", &C, &D); // Read desired score C:D

        // Check if it's possible to go from A:B to C:D
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}

