#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for (auto &i: a) {cin >> i;}
    
    sort(a.begin(), a.end());
    // for (auto &i: a) {cout << i << " ";}
    // cout << endl;
    int groups = 1;
    vector<long long> gaps;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            groups++;
            gaps.push_back(a[i] - a[i - 1]);
        }
    }

    sort(gaps.begin(), gaps.end());
    // for (auto &i: gaps) {cout << i << " ";}
    // cout << endl;
    for (int i = 0; i < gaps.size() && k > 0; i++) {
        k -= gaps[i] / x - (gaps[i] % x? 0: 1);
        if (k >= 0) {groups--;}
    }
    cout << groups << endl;
}