#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Chef watches first Y minutes at twice the speed, so the time taken is Y / 2
    int time_spent = (Y / 2) + (X - Y); // Time for first Y minutes and remaining X-Y minutes

    printf("%d\n", time_spent); // Output the total time spent
    return 0;
}