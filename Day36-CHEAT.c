#include <stdio.h>

int count_tuesdays(int N) {
    if (N < 2) {
        return 0;
    } else {
        return 1 + (N - 2) / 7;
    }
}

int main() {
    int T, N;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        scanf("%d", &N);  // Read each test case
        printf("%d\n", count_tuesdays(N));  // Output the result for each test case
    }

    return 0;
}
