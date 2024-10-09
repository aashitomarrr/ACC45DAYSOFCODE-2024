#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X; // N: total cards, X: cards face-up
        scanf("%d %d", &N, &X);
        
        // Calculate the number of face-down cards
        int face_down = N - X;
        
        // The minimum flips needed is the lesser of face-up or face-down cards
        int min_flips = (X < face_down) ? X : face_down;
        
        printf("%d\n", min_flips);
    }
    
    return 0;
}
