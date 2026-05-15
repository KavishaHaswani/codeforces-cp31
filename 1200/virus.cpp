#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int &i : a)
        {
            cin >> i;
        }

        sort(a.begin(), a.end());
        vector<int> gaps;
        if (a[0] - 1 + n - a[m - 1] > 0)
        {
            gaps.push_back(a[0] - 1 + n - a[m - 1]);
        }
        for (int i = 1; i < m; i++)
        {
            gaps.push_back(a[i] - a[i - 1] - 1);
        }

        int ans = n;
        sort(gaps.begin(), gaps.end(), greater<int>());
        for (int i = 0, days = 0; i < gaps.size(); i++)
        {
            if (gaps[i] - days * 2 < 1)
            {
                break;
            }
            ans -= (max(1, gaps[i] - days * 2 - 1));
            days += 2;
        }
        cout << ans << endl;
    }
}