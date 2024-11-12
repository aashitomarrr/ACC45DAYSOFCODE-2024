#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        // Horizontal attack: (N - 1) cells excluding the Queen's position
        int horizontal_attack = N - 1;
        
        // Vertical attack: (N - 1) cells excluding the Queen's position
        int vertical_attack = N - 1;
        
        // Diagonal attack: 
        // 1. Top-left to bottom-right
        int top_left_diag = (X - 1 < Y - 1) ? (X - 1) : (Y - 1);
        int bottom_right_diag = (N - X < N - Y) ? (N - X) : (N - Y);
        
        // 2. Top-right to bottom-left
        int top_right_diag = (X - 1 < N - Y) ? (X - 1) : (N - Y);
        int bottom_left_diag = (N - X < Y - 1) ? (N - X) : (Y - 1);
        
        // Total cells under attack
        int total_attack = horizontal_attack + vertical_attack + top_left_diag + bottom_right_diag + top_right_diag + bottom_left_diag;
        
        // Output the result for this test case
        printf("%d\n", total_attack);
    }

    return 0;
}