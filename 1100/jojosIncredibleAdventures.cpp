#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        long long n = s.size(), mx = 0;
        if (s[n - 1] == '1' && s[0] == '1')
        {
            for (int i = n - 1; i > -1 && s[i] == '1'; i--)
            {
                mx++;
            }
        }
        if (mx == n)
        {
            cout << n * n << endl;
            continue;
        }

        for (int i = 0, cur = mx; i < n; i++)
        {
            if (s[i] == '1')
            {
                cur++;
            }
            else
            {
                cur = 0;
            }
            mx = max(mx, (long long)cur);
        }
        long long mul = (mx + 1) / 2, ans = mul * (mx + 1 - mul);

        cout << ans << endl;
    }
}