#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);
        
        int free_space = S - (X + Y);  // Available free space after the two apps
        
        if (free_space >= Z) {
            printf("0\n");  // No need to delete any apps
        } else if ((S - X) >= Z || (S - Y) >= Z) {
            printf("1\n");  // Need to delete one app
        } else {
            printf("2\n");  // Need to delete both apps
        }
    }
    
    return 0;
}