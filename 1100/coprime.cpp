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
        unordered_map<int, int> a;
        for (int i = 0, t; i < n; i++)
        {
            cin >> t;
            a[t] = i;
        }

        int mx = -1;
        for (auto i : a)
        {
            for (auto j : a)
            {
                if (__gcd(i.first, j.first) == 1)
                {
                    mx = max(mx, i.second + j.second + 2);
                }
            }
        }
        cout << mx << endl;
    }
}