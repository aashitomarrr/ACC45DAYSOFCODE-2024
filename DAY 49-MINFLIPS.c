#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the size of the array
        int A[N];
        int sum = 0;

        // Read the array and calculate the sum
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
        }

        // If the sum is odd, it's impossible to make the sum 0
        if (sum % 2 != 0) {
            printf("-1\n");
        } else {
            // If sum is even, we can proceed
            int target = sum / 2;
            int count1 = 0;
            int count_minus1 = 0;

            // Count the number of 1's and -1's
            for (int i = 0; i < N; i++) {
                if (A[i] == 1) {
                    count1++;
                } else {
                    count_minus1++;
                }
            }

            // To balance, we need half of the total sum (target) to be converted
            // The minimum flips required would be flipping enough 1's to make the sum zero
            // or vice versa
            int flips = abs(target);
            printf("%d\n", flips);
        }
    }

    return 0;
}