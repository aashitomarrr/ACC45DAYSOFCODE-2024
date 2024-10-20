#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, A, B;         scanf("%d %d %d", &N, &A, &B);

        int rounds = 0;
        int totalTime = 0;

                while (N > 1) {
            rounds++;
            N /= 2;
        }

        totalTime = rounds * A + (rounds - 1) * B;

                printf("%d\n", totalTime);
    }

    return 0;
}
