#include <bits/stdc++.h>

using namespace std;

void inputKHighest(vector<pair<int, int>> &a, int n, int k)
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    for (int i = 0, temp; i < n; i++)
    {
        cin >> temp;
        if (pq.size() < 3 || pq.top().first < temp)
        {
            pq.push({temp, i});
        }
        if (pq.size() > 3)
        {
            pq.pop();
        }
    }

    a = vector<pair<int, int>>(k);
    for (int i = 2; i > -1; i--)
    {
        a[i] = pq.top();
        pq.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 3;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        inputKHighest(a, n, k);
        inputKHighest(b, n, k);
        inputKHighest(c, n, k);

        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i].second == b[j].second)
                {
                    continue;
                }
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second == c[k].second ||
                        b[j].second == c[k].second)
                    {
                        continue;
                    }
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
        cout << ans << endl;
    }
}