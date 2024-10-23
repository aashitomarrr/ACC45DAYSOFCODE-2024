#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);  // Read H, X, Y for each test case
        
        // Check if the special attack alone can defeat the boss
        if (H - Y <= 0) {
            printf("1\n");
        } else {
            // Use the special attack first, then calculate remaining normal attacks
            H -= Y;
            int attacks = H / X;
            if (H % X != 0) {
                attacks++;
            }
            printf("%d\n", attacks + 1);  // Include the special attack in the total
        }
    }
    return 0;
}