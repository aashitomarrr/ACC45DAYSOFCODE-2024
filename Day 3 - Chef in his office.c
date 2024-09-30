#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Working hours from Monday to Thursday and on Friday
        scanf("%d %d", &X, &Y);

        // Calculate total working hours in a week
        int total_hours = 4 * X + Y;

        // Output the result for the current test case
        printf("%d\n", total_hours);
    }

    return 0;
}


