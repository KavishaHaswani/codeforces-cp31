#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, ans = 0;
        cin >> n >> b;
        b = b % 2;
        a = 1 - b;
        n--;
        while (n--) {
            cin >> c;
            c = c % 2;
            if (a == b) {
                b = b * c;
                ans++;
            } else if (b == c) {
                b = b * c;
                ans++;
            } else {
                a = b;
                b = c;
            }
        }
        if (a == b) {ans++;}
        cout << ans << endl;
    }
}