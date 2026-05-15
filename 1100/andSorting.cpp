#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0b111111111111111111;
        cin >> n;
        for (int i = 0, t; i < n; i++) {
            cin >> t;
            if (t != i) {
                ans &= t;
            }
        }

        cout << ans << endl;
    }
}