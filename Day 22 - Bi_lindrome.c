#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        char S[101];
        scanf("%s", S);
        
        // Frequency array for lowercase English letters
        int freq[26] = {0};
        
        // Count the frequency of each character
        for (int i = 0; i < N; i++) {
            freq[S[i] - 'a']++;
        }
        
        int maxFreq = 0;
        int secondMaxFreq = 0;

        // Find the two highest frequencies
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                secondMaxFreq = maxFreq;
                maxFreq = freq[i];
            } else if (freq[i] > secondMaxFreq) {
                secondMaxFreq = freq[i];
            }
        }

        // If there's at least one character with a frequency >= 2
        if (maxFreq > 1) {
            // Calculate maximum deletable subsequence length
            int deletableLength = N - 2; // We keep at least 2 characters
            printf("%d\n", deletableLength);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
