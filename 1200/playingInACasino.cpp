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
        vector<vector<int>> c(m);
        for (int i = 0, t; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> t;
                c[j].push_back(t);
            }
        }

        long long ans = 0;
        for (auto &i : c)
        {
            sort(i.begin(), i.end());
            long long sum = accumulate(i.begin(), i.end(), 0ll);
            for (int j = 0; j < n; j++)
            {
                ans += sum - (long long)(n - j) * i[j];
                sum -= i[j];
            }
        }
        cout << ans << endl;
    }
}