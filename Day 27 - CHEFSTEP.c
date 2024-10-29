#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Read N and K

        int distances[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &distances[i]); // Read distances
        }

        // Prepare the result string
        char result[N + 1]; // +1 for null terminator
        for (int i = 0; i < N; i++) {
            // Check if distance is traversable
            if (distances[i] % K == 0) {
                result[i] = '1'; // Can be traversed
            } else {
                result[i] = '0'; // Cannot be traversed
            }
        }
        result[N] = '\0'; // Null terminate the string

        // Print the result for the current test case
        printf("%s\n", result);
    }

    return 0;
}
















