#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        sort(a.begin(), a.end());
        long long sum = accumulate(a.begin(), a.end(), 0ll);
        int prevDay = -1, curDay;
        long long ans = 0;
        for (int i = n - 1; i > -1; i--) {
            curDay = (x - sum >= 0? (x - sum) / (i + 1): -1);
            ans += (long long)(curDay - prevDay) * (i + 1);
            prevDay = curDay;
            sum -= (long long)a[i];
        }
        cout << ans << endl;
    }
}