#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int q = i / a[i], r = i % a[i];
            int j = (q * a[i]) + (a[i] - r);
            while (j < i)
            {
                j += a[i];
            }

            for (; j <= n; j += a[i])
            {
                if ((long long)a[i] * a[j] == (long long)i + j)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}