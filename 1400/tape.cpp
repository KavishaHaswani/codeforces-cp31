#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }

    k = n - k;
    priority_queue<int> pq;
    for (int i = 1; i < n; i++)
    {
        if (pq.size() < k || (pq.size() && pq.top() > b[i] - b[i - 1]))
        {
            pq.push(b[i] - b[i - 1]);
        }
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    int ans = n - k;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;
}