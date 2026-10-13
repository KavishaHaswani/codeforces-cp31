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
        vector<pair<int, int>> nodeInfo(n, {0, 0}); // weight, no of connections
        long long ans = 0;
        for (auto &i : nodeInfo)
        {
            cin >> i.first;
            ans += i.first;
        }

        for (int i = 1, u, v; i < n; i++)
        {
            cin >> u >> v;
            nodeInfo[u - 1].second++;
            nodeInfo[v - 1].second++;
        }

        vector<pair<int, int>> pq;
        for (auto i : nodeInfo)
        {
            if (i.second > 1)
            {
                pq.push_back(i);
            }
        }
        sort(pq.begin(), pq.end(), greater<>());

        cout << ans << " ";
        int i = 2;
        while (i < n)
        {
            auto &[w, c] = pq[0];
            ans += w;
            if (c == 2)
            {
                pq.erase(pq.begin());
            }
            else
            {
                c--;
            }
            cout << ans << " ";
            i++;
        }
        cout << endl;
    }
}
