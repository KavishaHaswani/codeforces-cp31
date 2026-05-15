#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n = 10, score = 0, x, y;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (s[j] == 'X') {
                    x = n - i <= n / 2? n - i - 1: i;
                    y = n - j <= n / 2? n - j - 1: j;
                    score += min(x, y) + 1;
                }
            }
        }
        cout << score << endl;
    }
}