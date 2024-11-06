#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    // Process each test case
    while (T--) {
        int X, A, B;
        scanf("%d %d %d", &X, &A, &B);

        // Calculate the total points Chef earned
        int total_points = A + 2 * B;

        // Check if Chef qualifies or not
        if (total_points >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }

    return 0;
}
