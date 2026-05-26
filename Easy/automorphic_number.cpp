
// Problem: Automorphic Number Check
// Difficulty: Easy
// Approach: Compare ending digits of square with original number
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check Automorphic number
bool isAutomorphic(int n) {

    int square = n * n;
    int temp = n;

    while(temp > 0) {

        // Compare last digits
        if(temp % 10 != square % 10)
            return false;

        temp /= 10;
        square /= 10;
    }

    return true;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isAutomorphic(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
