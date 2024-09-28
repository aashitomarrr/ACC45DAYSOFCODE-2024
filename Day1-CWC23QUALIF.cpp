#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X; // Input the team's score

    // Check if the score is 12 or more
    if (X >= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}