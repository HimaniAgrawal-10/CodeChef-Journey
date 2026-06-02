 // Problem: Maximum Consecutive Ones
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

int longestOnes(const string& s) {
    int current = 0;
    int maximum = 0;

    for(char ch : s) {
        if(ch == '1') {
            current++;
            maximum = max(maximum, current);
        } else {
            current = 0;
        }
    }

    return maximum;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        cout << longestOnes(s) << endl;
    }

    return 0;
}
