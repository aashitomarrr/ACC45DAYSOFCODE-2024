#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void simpleSieve(int limit, bool *prime) {
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                prime[i] = false;
            }
        }
    }
}

void segmentedSieve(int m, int n) {
    int limit = floor(sqrt(n)) + 1;
    bool *prime = (bool *)malloc((limit + 1) * sizeof(bool));
    for (int i = 0; i <= limit; i++) {
        prime[i] = true;
    }
    simpleSieve(limit, prime);

    int rangeSize = n - m + 1;
    bool *isPrimeRange = (bool *)malloc(rangeSize * sizeof(bool));
    for (int i = 0; i < rangeSize; i++) {
        isPrimeRange[i] = true;
    }
    
    if (m == 1) {
        isPrimeRange[0] = false; // 1 is not prime
    }

    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            int start = fmax(i * i, m + (i - m % i) % i);
            for (int j = start; j <= n; j += i) {
                isPrimeRange[j - m] = false;
            }
        }
    }

    for (int i = 0; i < rangeSize; i++) {
        if (isPrimeRange[i]) {
            printf("%d\n", i + m);
        }
    }

    free(prime);
    free(isPrimeRange);
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int m, n;
        scanf("%d %d", &m, &n);
        segmentedSieve(m, n);
        if (i < t - 1) {
            printf("\n"); // Separate test cases by an empty line
        }
    }

    return 0;
}


