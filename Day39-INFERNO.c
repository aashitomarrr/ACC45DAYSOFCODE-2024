#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N and X for each test case

        int health[N];
        int max_health = 0;
        int single_target_time = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &health[i]);
            max_health = max(max_health, health[i]);
            single_target_time += ceil_div(health[i], X);  // Calculate ceil(health[i] / X)
        }

        // Minimum time is the lesser of multi-target time and single-target time
        int min_time = single_target_time < max_health ? single_target_time : max_health;
        printf("%d\n", min_time);
    }

    return 0;
}
