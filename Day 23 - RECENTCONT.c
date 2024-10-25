#include <stdio.h>
#include <string.h>

int main() {
    int T, N;  // T is the number of test cases, N is the number of problems in each test case
    char contest[10];  // To store the contest code (START38 or LTIME108)

    // Read number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the number of problems
        scanf("%d", &N);

        int count_start38 = 0, count_ltime108 = 0;

        // Loop through the contest codes
        for (int i = 0; i < N; i++) {
            // Read contest code
            scanf("%s", contest);

            // Compare contest code and count accordingly
            if (strcmp(contest, "START38") == 0) {
                count_start38++;
            } else if (strcmp(contest, "LTIME108") == 0) {
                count_ltime108++;
            }
        }

        // Output the counts for START38 and LTIME108
        printf("%d %d\n", count_start38, count_ltime108);
    }

    return 0;
}
