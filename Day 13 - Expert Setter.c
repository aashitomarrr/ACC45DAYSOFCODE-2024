#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // X: total problems submitted, Y: problems approved
        scanf("%d %d", &X, &Y);

        // Check if at least 50% of the problems were approved
        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
