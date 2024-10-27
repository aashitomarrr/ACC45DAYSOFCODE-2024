

#include <stdio.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculate the maximum possible tastiness by taking the max of A or B and C or D
        int max_tastiness = max(a, b) + max(c, d);
        
        printf("%d\n", max_tastiness);
    }
    
    return 0;
}