
// Problem: Tech Number Check
// Difficulty: Easy-Medium
// Approach: Split number into halves and validate square condition
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits
int countDigits(int n) {
    int count = 0;

    while(n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

// Function to check tech number
bool isTechNumber(int n) {

    int digits = countDigits(n);

    // Must have even digits
    if(digits % 2 != 0)
        return false;

    int divisor = pow(10, digits / 2);

    int left = n / divisor;
    int right = n % divisor;

    int sum = left + right;

    return (sum * sum == n);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isTechNumber(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
