#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i: a) {
            cin >> i;
        }

        int ans = 0, i = n - 2;
        while (i > -1) {
            if (a[i] == a[n - 1]) {
                i--;
                continue;
            }
            ans++;
            i -= (n - i - 1);
        }
        cout << ans << endl;
    }
}