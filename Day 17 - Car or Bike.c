#include <stdio.h>

int main() {
    int T, X, Y;
    
    // Input number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Input X and Y for each test case
        scanf("%d %d", &X, &Y);
        
        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }
    
    return 0;
}

