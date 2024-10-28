#include <stdio.h>
#include <string.h>

#define MAX_JEWELS 256 // To cover all possible characters (a-z, A-Z)

// Function to calculate the minimum cost
int calculate_minimum_cost(const char *jewels) {
    int count[MAX_JEWELS] = {0}; // Array to count jewels
    int cost = 0;

    // Count occurrences of each jewel
    for (int i = 0; jewels[i] != '\0'; i++) {
        count[(int)jewels[i]]++;
    }

    // Calculate the cost based on the counts
    for (int i = 0; i < MAX_JEWELS; i++) {
        if (count[i] > 0) {
            // If we need 'n' jewels of a certain color, we buy ceil(n/2)
            cost += (count[i] + 1) / 2;
        }
    }

    return cost;
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    char jewels[201]; // Array to hold jewel strings (max length 200 + null terminator)

    for (int i = 0; i < T; i++) {
        scanf("%s", jewels); // Read each jewel string
        int min_cost = calculate_minimum_cost(jewels); // Calculate the cost
        printf("%d\n", min_cost); // Output the result
    }

    return 0;
}
