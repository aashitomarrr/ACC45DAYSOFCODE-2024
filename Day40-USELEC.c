#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting integers in ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to determine if candidate A can win the election
const char* can_candidate_a_win(int n, int x, int a_votes[], int b_votes[]) {
    int a_wins = 0, required_wins = (n / 2) + 1;
    int vote_diffs[n], diff_count = 0;

    // Calculate initial wins for candidate A and store needed votes for losses
    for (int i = 0; i < n; i++) {
        if (a_votes[i] > b_votes[i]) {
            a_wins++;  // A already wins this state
        } else {
            // Calculate additional votes needed for A to win in this state
            vote_diffs[diff_count++] = b_votes[i] - a_votes[i] + 1;
        }
    }

    // If A already has enough wins
    if (a_wins >= required_wins) {
        return "YES";
    }

    // Sort the vote_diffs array to prioritize the smallest additional votes needed
    qsort(vote_diffs, diff_count, sizeof(int), compare);

    // Try to gain more state wins by using Chef's additional votes
    for (int i = 0; i < diff_count && a_wins < required_wins; i++) {
        if (x >= vote_diffs[i]) {
            x -= vote_diffs[i];
            a_wins++;
        } else {
            break;
        }
    }

    // Check if we reached the required number of state wins
    return a_wins >= required_wins ? "YES" : "NO";
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int a_votes[n], b_votes[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a_votes[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b_votes[i]);
        }

        // Call the function and print the result
        printf("%s\n", can_candidate_a_win(n, x, a_votes, b_votes));
    }

    return 0;
}
