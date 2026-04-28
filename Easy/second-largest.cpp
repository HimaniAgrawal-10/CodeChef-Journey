#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int second;

        if ((a >= b && a <= c) || (a >= c && a <= b))
            second = a;
        else if ((b >= a && b <= c) || (b >= c && b <= a))
            second = b;
        else
            second = c;

        cout << second << endl;
    }

    return 0;
}
