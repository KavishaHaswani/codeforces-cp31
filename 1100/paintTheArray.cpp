#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        cin >> a[0] >> a[1];
        long long eg = a[0], og = a[1];
        for (int i = 2; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0) {
                eg = __gcd(eg, a[i]);
            } else {
                og = __gcd(og, a[i]);
            }
        }
        for (int i = 0; i < n && (eg > 1 || og > 1); i++) {
            if (i % 2 == 0 && og == __gcd(og, a[i])) {
                og = 1;
            } else if (i % 2 == 1 && eg == __gcd(eg, a[i])) {
                eg = 1;
            }
        }

        if (og > 1) {cout << og << endl;}
        else if (eg > 1) {cout << eg << endl;}
        else {cout << 0 << endl;}
    }
}