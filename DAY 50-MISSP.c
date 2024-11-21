#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read number of dolls

        int missing_doll = 0;  // This will hold the result after XOR-ing all doll types

        for (int i = 0; i < N; i++) {
            int doll_type;
            scanf("%d", &doll_type);  // Read each doll type
            missing_doll ^= doll_type;  // XOR the doll type with the current result
        }

        // After all XOR operations, missing_doll will be the doll type without a pair
        printf("%d\n", missing_doll);
    }

    return 0;
}