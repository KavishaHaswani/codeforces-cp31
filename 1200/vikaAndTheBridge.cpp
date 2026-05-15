#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        unordered_map<int,
                      pair<int,
                           priority_queue<int, vector<int>, greater<int>>>>
            m; // color: {last, 2largDist}
        for (int i = 0, temp; i < n; i++)
        {
            cin >> temp;
            if (m.count(temp))
            {
                if (m[temp].second.size() < 2 ||
                    m[temp].second.top() < i - m[temp].first - 1)
                {
                    m[temp].second.push(i - m[temp].first - 1);
                }
            }
            else
            {
                m[temp].second.push(i - 0);
            }
            m[temp].first = i;
            if (m[temp].second.size() > 2)
            {
                m[temp].second.pop();
            }
        }

        int ans = 200000;
        for (auto i : m)
        {
            if (i.second.second.size() < 2 ||
                i.second.second.top() < n - i.second.first - 1)
            {
                i.second.second.push(n - i.second.first - 1);
            }
            if (i.second.second.size() > 2)
            {
                i.second.second.pop();
            }
            int j = i.second.second.top();
            i.second.second.pop();
            int k = i.second.second.top();
            ans = min(ans, max(j, k / 2));
        }
        cout << ans << endl;
    }
}