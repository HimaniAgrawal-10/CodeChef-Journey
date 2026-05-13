
// Problem: Spy Number Check
// Difficulty: Easy
// Approach: Compare sum and product of digits
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check spy number
bool isSpyNumber(int n) {

    int sum = 0;
    int product = 1;

    while(n > 0) {
        int digit = n % 10;

        sum += digit;
        product *= digit;

        n /= 10;
    }

    return sum == product;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isSpyNumber(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
