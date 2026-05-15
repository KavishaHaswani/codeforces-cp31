#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n), y(n);
        for (int &i: x) {cin >> i;}
        for (int &j: y) {cin >> j;}

        multiset<int> ms;
        for (int i = 0; i < n; i++) {
            ms.insert(y[i] - x[i]);
        }

        int ans = 0;
        while (ms.size() > 1) {
            auto a = *ms.begin();
            ms.erase(ms.begin());

            auto b = ms.lower_bound(-a);

            if (b == ms.end()) {continue;}

            ms.erase(b);
            ans++;
        }
        cout << ans << endl;
    }
}