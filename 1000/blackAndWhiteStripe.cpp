#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, cur = 0, ans = 200001;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < k - 1; i++) {
            if (s[i] == 'W') {cur++;}
        }
        for (int i = k - 1; i < n; i++) {
            cur += (s[i] == 'W'? 1: 0);
            ans = min(ans, cur);
            cur -= (s[i - k + 1] == 'W'? 1: 0);
        }
        cout << ans << endl;
    }
}