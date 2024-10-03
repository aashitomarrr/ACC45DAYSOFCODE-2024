#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  

        
        int points_A_first = max(500 - 2 * X, 0) + max(1000 - 4 * (X + Y), 0);

        
        int points_B_first = max(1000 - 4 * Y, 0) + max(500 - 2 * (X + Y), 0);

        
        printf("%d\n", max(points_A_first, points_B_first));
    }

    return 0;
}