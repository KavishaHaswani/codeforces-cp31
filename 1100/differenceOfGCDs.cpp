#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> a(n);
        bool flag = true;
        for (long long i = n, t; i > 0 && flag; i--) {
            t = l / i * i;
            t += (t < l? i: 0);
            if (t > r) {
                flag = false;
            }
            a[i - 1] = t;
        }
        if (flag) {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {cout << a[i] << " ";}
            cout << endl;
        } else {
            cout << "NO\n";
        }
    }
}