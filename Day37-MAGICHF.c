#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, S;
        scanf("%d %d %d", &N, &X, &S);

        int coin_position = X;

        // Process each swap
        for (int i = 0; i < S; i++) {
            int A, B;
            scanf("%d %d", &A, &B);

            // Perform the swap
            if (coin_position == A) {
                coin_position = B;
            } else if (coin_position == B) {
                coin_position = A;
            }
        }

        // Output the final position of the coin
        printf("%d\n", coin_position);
    }

    return 0;
}

