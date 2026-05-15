#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), ad(n);
        for (int &i: a) {cin >> i;}
        for (int &i: ad) {cin >> i;}

        int cur = 1, mx = 1, r = 0;
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (ad[i - 1] <= ad[i]) {
                cur++;
            } else {
                cur = 1;
                if (flag) {break;}
            }
            if (ad[i] != a[i]) {flag = true;}
            if (cur > mx || flag) {
                mx = cur, r = i;
            }
        }

        cout << r - mx + 2 << " " << r + 1 << endl;
    }
}