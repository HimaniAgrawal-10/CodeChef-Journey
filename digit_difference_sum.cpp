
// Problem: Digit Difference Sum
// Difficulty: Easy-Medium
// Approach: Traverse digits and separate odd/even positions
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to compute difference
int digitDifference(int n) {
    int oddSum = 0, evenSum = 0;
    int position = 1;

    while(n > 0) {
        int digit = n % 10;

        if(position % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        n /= 10;
        position++;
    }

    return abs(oddSum - evenSum);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        cout << digitDifference(n) << endl;
    }

    return 0;
}
