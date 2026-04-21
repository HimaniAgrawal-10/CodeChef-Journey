// Problem: https://www.codechef.com/problems/FLOW007
// Name: Reverse Number
// Difficulty: Easy
// Approach: Reverse digits using mathematical operations
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;          // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        n /= 10;                    // remove last digit
    }

    return reversed;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << reverseNumber(n) << endl;
    }

    return 0;
}
