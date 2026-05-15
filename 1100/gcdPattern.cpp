#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long tot = 0, sum = 0, ans = 1;
        for (int &i: a) {
            cin >> i;
            tot += i;
        }

        for (int i = 0; i < n - 1; i++) {
            sum += a[i];
            ans = max(ans, __gcd(sum, tot - sum));
        }
        cout << ans << endl;
    }
}