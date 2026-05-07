// Problem: Mirror Digit Number
// Difficulty: Easy-Medium
// Approach: Reverse number with mirror transformation
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check mirror number
bool isMirrorNumber(string num) {
    int left = 0;
    int right = num.length() - 1;

    while(left <= right) {
        char a = num[left];
        char b = num[right];

        // Valid mirror pairs
        if((a == '0' && b == '0') ||
           (a == '1' && b == '1') ||
           (a == '8' && b == '8') ||
           (a == '6' && b == '9') ||
           (a == '9' && b == '6')) {

            left++;
            right--;
        }
        else {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string num;
        cin >> num;

        if(isMirrorNumber(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
