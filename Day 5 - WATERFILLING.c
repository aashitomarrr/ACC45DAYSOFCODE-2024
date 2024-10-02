#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);
        
        // Count how many bottles are empty
        int emptyCount = (B1 == 0) + (B2 == 0) + (B3 == 0);
        
        // If at least two bottles are empty, we need to fill them
        if (emptyCount >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    
    return 0;
}
