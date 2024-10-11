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
        int maxTastiness = max(a, b) + max(c, d);
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}
