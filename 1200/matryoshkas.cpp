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
        map<int, int> a;
        for (int i = 0, t; i < n; i++)
        {
            cin >> t;
            a[t]++;
        }

        int ans = 0;
        for (auto i = a.begin(); i != a.end(); i++)
        {
            if (prev(i, 1)->first == i->first - 1)
            {
                ans += max(0, i->second - prev(i, 1)->second);
            }
            else
            {
                ans += i->second;
            }
        }
        cout << ans << endl;
    }
}