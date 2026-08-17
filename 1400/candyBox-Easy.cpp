#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0, t; i < n; i++)
        {
            cin >> t;
            a[t - 1]++;
        }

        sort(a.begin(), a.end(), greater<>());

        int last = n + 1, ans = 0;
        for (auto i : a)
        {
            if (i == 0 || last == 1)
            {
                break;
            }
            last = (i >= last ? last - 1 : i);
            ans += last;
        }

        cout << ans << endl;
    }
}