#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, K;
        scanf("%d", &N);  // Read number of songs
        int A[N];
        
        // Read the lengths of the songs
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Read the position of Uncle Johny in the initial playlist
        scanf("%d", &K);
        
        // The song length of Uncle Johny
        int uncleJohnyLength = A[K-1];  // 1-based index, so we access K-1
        
        // Sort the array in ascending order
        qsort(A, N, sizeof(int), compare);
        
        // Find the new position of the song "Uncle Johny"
        for (int i = 0; i < N; i++) {
            if (A[i] == uncleJohnyLength) {
                // Print the new position (1-based index)
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    
    return 0;
}