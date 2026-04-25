// Problem: Balanced Number Check
// Difficulty: Easy
// Approach: Split digits into two halves and compare sums
// Time Complexity: O(log n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

// Function to check balanced number
bool isBalanced(int n) {
    vector<int> digits;

    // Extract digits
    while(n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    int size = digits.size();

    // If odd digits → ignore middle
    int mid = size / 2;

    int leftSum = 0, rightSum = 0;

    for(int i = 0; i < mid; i++) {
        rightSum += digits[i];  // right side (reversed)
    }

    for(int i = (size % 2 == 0 ? mid : mid + 1); i < size; i++) {
        leftSum += digits[i];   // left side
    }

    return leftSum == rightSum;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isBalanced(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
