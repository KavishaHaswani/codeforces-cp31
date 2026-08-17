#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<long long>> h(2, vector<long long>(n));
    for (auto &i : h)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }

    for (int i = 1; i < n; i++)
    {
        h[0][i] = max(h[1][i - 1] + h[0][i], h[0][i - 1]);
        h[1][i] = max(h[0][i - 1] + h[1][i], h[1][i - 1]);
    }

    cout << max(h[0][n - 1], h[1][n - 1]) << endl;
}
