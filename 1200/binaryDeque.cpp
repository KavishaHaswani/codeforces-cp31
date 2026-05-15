#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        int l = 0, ans = 0, cur = 0;
        for (int r = 0; r < n; r++)
        {
            cur += a[r];
            while (cur > s)
            {
                cur -= a[l++];
            }
            if (cur == s)
            {
                ans = max(ans, r - l + 1);
            }
        }
        cout << (cur == s? n - ans: -1) << endl;
    }
}