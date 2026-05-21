// Problem: Emirp Number Check
// Difficulty: Easy-Medium
// Approach: Reverse number and check prime conditions
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {

    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

// Function to reverse number
int reverseNumber(int n) {

    int reversed = 0;

    while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return reversed;
}

// Function to check Emirp
bool isEmirp(int n) {

    int reversed = reverseNumber(n);

    return (n != reversed &&
            isPrime(n) &&
            isPrime(reversed));
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isEmirp(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
