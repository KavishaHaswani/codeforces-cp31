#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> a(32, 0);
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            a[log2(tmp)]++;
        }

        int ans = 0;
        priority_queue<int> h;
        for (int i = a.size() - 1, space, block; i > -1; i--)
        {
            while (a[i])
            {
                block = 1 << (i);
                if (h.empty() || h.top() < block)
                {
                    ans++;
                    space = w;
                }
                else
                {
                    space = h.top();
                    h.pop();
                }
                if (space - block > 0)
                {
                    h.push(space - block);
                }
                a[i]--;
            }
        }

        cout << ans << endl;
    }
}