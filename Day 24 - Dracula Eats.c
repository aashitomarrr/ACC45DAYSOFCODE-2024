#include <stdio.h>

int countTuesdays(int N) {
    int tuesdays = N / 7; // Complete weeks give this many Tuesdays
    if (N % 7 >= 2) {     // Check for an extra Tuesday in the remaining days
        tuesdays++;
    }
    return tuesdays;
}

int main() {
    int T, N;

    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read number of spooky days for each test case
        scanf("%d", &N);
        
        // Calculate and print the result
        printf("%d\n", countTuesdays(N));
    }

    return 0;
}

