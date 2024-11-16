#include <stdio.h>
#include <string.h>

// Function to encode the string as per the problem's requirements
void encode_message(char *S, int N) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i < N - 1; i += 2) {
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }

    // Step 2: Replace each character with its opposite letter in the alphabet
    for (int i = 0; i < N; i++) {
        S[i] = 'a' + ('z' - S[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the string
        
        char S[101];  // Create a string buffer of max length 100 (as N <= 100)
        scanf("%s", S);  // Read the message
        
        encode_message(S, N);  // Encode the message
        
        printf("%s\n", S);  // Output the encoded message
    }
    
    return 0;
}