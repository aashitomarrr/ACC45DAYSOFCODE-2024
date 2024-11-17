#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    
    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R); // Read X, Y, and R for each test case
        
        // Calculate the number of extra sticks Chef ate
        int extra_sticks = R / 30;
        
        // Calculate the total number of sticks Chef ate
        int total_sticks = X + extra_sticks;
        
        // Calculate the number of plates Chef could have ordered
        // We use ceiling division to find the number of plates
        int plates = (total_sticks + Y - 1) / Y;
        
        // Print the result for this test case
        printf("%d\n", plates);
    }

    return 0;
}