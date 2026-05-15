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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        int x = n, y = n, ans = 0;
        for (auto i : a)
        {
            if (i <= x)
            {
                x = i;
            }
            else if (i <= y)
            {
                y = i;
            }
            else
            {
                ans++;
                x = y;
                y = i;
            }
        }
        cout << ans << endl;
    }
}