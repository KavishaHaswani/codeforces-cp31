#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());
    long long sum = accumulate(a.begin(), a.end() - 1, 0ll,
                               [](long long a, pair<int, int> i)
                               { return a + i.first; });
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (sum - a[i].first == a[n - 1].first)
        {
            ans.push_back(a[i].second);
        }
    }
    if (sum - a[n - 2].first == a[n - 2].first)
    {
        ans.push_back(a[n - 1].second);
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}