
// Problem: Frequency Balanced Number
// Difficulty: Easy-Medium
// Approach: Count frequency of each digit and compare
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

// Function to check frequency balance
bool isBalanced(int n) {
    vector<int> freq(10, 0);

    // Count digit frequency
    while(n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int expected = 0;

    // Find first non-zero frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] != 0) {
            expected = freq[i];
            break;
        }
    }

    // Check if all non-zero frequencies are equal
    for(int i = 0; i < 10; i++) {
        if(freq[i] != 0 && freq[i] != expected)
            return false;
    }

    return true;
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
