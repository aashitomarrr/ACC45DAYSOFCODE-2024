#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q); // Read the scores of Alice and Bob

        int totalPoints = P + Q; // Calculate total points scored
        int serveNumber = totalPoints + 1; // Determine the current serve number

        // Determine whose serve it is
        // Each player serves 2 times in sequence
        // Calculate how many complete groups of 2 serves have occurred
        if ((serveNumber - 1) / 2 % 2 == 0) {
            printf("Alice\n"); // Even group, it's Alice's serve
        } else {
            printf("Bob\n");   // Odd group, it's Bob's serve
        }
    }

    return 0;
}

