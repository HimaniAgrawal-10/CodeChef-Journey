// Problem: https://www.codechef.com/problems/FLOW006
// Name: Sum of Digits
// Difficulty: Easy
// Approach: Extract digits using modulo and accumulate sum
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to calculate digit sum
int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;  // extract last digit
        n /= 10;        // remove digit
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << digitSum(n) << endl;
    }

    return 0;
}
