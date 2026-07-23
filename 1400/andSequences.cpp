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

        unordered_map<int, int> count;
        int AND = a[0];
        count[a[0]]++;
        for (int i = 1; i < n; i++)
        {
            AND = AND & a[i];
            count[a[i]]++;
        }

        bool flag = true;
        if (count[AND] < 2)
        {
            flag = false;
        }

        if (!flag)
        {
            cout << 0 << endl;
        }
        else
        {
            int mod = 1e9 + 7;
            long long ans = 1ll * count[AND] * (count[AND] - 1) % mod;
            for (int i = a.size() - 2; i > 0; i--)
            {
                ans = ans * i % mod;
                if (ans == 0)
                {
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}
