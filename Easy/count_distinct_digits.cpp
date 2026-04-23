// Problem: Count Distinct Digits in a Number
// Difficulty: Easy
// Approach: Use frequency array to track visited digits
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to count distinct digits
int countDistinct(int n) {
    bool visited[10] = {false};
    int count = 0;

    while(n > 0) {
        int digit = n % 10;

        if(!visited[digit]) {
            visited[digit] = true;
            count++;
        }

        n /= 10;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        cout << countDistinct(n) << endl;
    }

    return 0;
}
