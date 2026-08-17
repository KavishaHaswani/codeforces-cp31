#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }

    unordered_map<int, vector<int>> diffToBValues;
    for (int i = 0; i < n; i++)
    {
        diffToBValues[b[i] - (i + 1)].push_back(b[i]);
    }

    long long ans = 0;
    for (auto i : diffToBValues)
    {
        ans = max(ans, accumulate(i.second.begin(), i.second.end(), 0ll));
    }

    cout << ans << endl;
}
