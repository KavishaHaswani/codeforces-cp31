#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, x, ans = 0, ans2 = 0;
        cin >> k >> x;

        int l = 0, r = k, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if ((long long)mid * (mid - 1) / 2 < x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        x -= (long long)ans * (ans + 1) / 2;

        l = 1, r = k - 1;
        if (x > 0 && k > 1)
        {
            while (l <= r)
            {
                mid = (l + r) / 2;
                if ((long long)(k - mid - 1) * (mid + k) / 2 < x)
                {
                    ans2 = k - mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
        }
        cout << ans + ans2 << endl;
    }
}