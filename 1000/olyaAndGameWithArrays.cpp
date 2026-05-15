#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, mini = 1000000001;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            priority_queue<int> pq_local;
            for (int j = 0; j < m; j++)
            {
                cin >> a;
                if (pq_local.size() < 2 || a < pq_local.top())
                {
                    pq_local.push(a);
                }
                if (pq_local.size() > 2)
                {
                    pq_local.pop();
                }
                mini = min(mini, a);
            }
            pq.push(pq_local.top());
        }

        long long ans = (long long)mini;
        while (pq.size() > 1)
        {
            ans += (long long)pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
}