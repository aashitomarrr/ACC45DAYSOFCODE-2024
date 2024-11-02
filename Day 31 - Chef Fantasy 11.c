#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of players
        scanf("%d", &N);
        
        // Calculate choices for captain and vice-captain
        int choices = N * (N - 1);
        
        // Print the result
        printf("%d\n", choices);
    }

    return 0;
}



