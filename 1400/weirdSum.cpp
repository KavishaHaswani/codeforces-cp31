#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> rowByColor;
    unordered_map<int, vector<int>> colByColor;
    for (int i = 0, tmp; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            rowByColor[tmp].push_back(i);
            colByColor[tmp].push_back(j);
        }
    }

    long long ans = 0;
    for (auto &colorAndLocs : rowByColor)
    {
        auto [color, rows] = colorAndLocs;
        auto cols = colByColor[color];

        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());

        long long rowSum = accumulate(rows.begin(), rows.end(), 0ll);
        long long colSum = accumulate(cols.begin(), cols.end(), 0ll);

        int tmp = rows.size();
        for (int i = 0; i < tmp; i++)
        {
            ans += (rowSum - 1ll * (tmp - i) * rows[i]) + (colSum - 1ll * (tmp - i) * cols[i]);
            rowSum -= rows[i];
            colSum -= cols[i];
        }
    }

    cout << ans << endl;
}
