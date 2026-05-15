#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, cur, ans;
        cin >> n;
        cin >> l;
        if (n > 1)
        {
            cin >> cur;
        }

        ans = n;
        for (int i = 2; i < n; i++)
        {
            cin >> r;
            if (abs(l - cur) + abs(cur - r) == abs(l - r))
            {
                ans--;
            }
            else
            {
                l = cur;
            }
            cur = r;
        }
        cout << (ans == 2 && l == cur ? 1 : ans) << endl;
    }
}