#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        // Check if Y can be achieved with multiples of X marks
        if (Y % X == 0 && Y / X <= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
