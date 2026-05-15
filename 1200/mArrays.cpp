#include <bits/stdc++.h>

using namespace std;

void helper(deque<bool> &q)
{
    if (!q.front())
    {
        q.push_back(true);
    }
    q.pop_front();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }

        unordered_map<int, int> s;
        for (int i : a)
        {
            s[i % m]++;
        }

        int ans = s.count(0) + (m % 2 == 0? s.count(m / 2): 0);
        for (int i = m / 2 - (1 - m % 2), cur; i > 0; i--) {
            cur = min(s[i], s[m - i]);
            if (cur) {
                ans++;
                s[i] -= cur;
                s[m - i] -= cur;
                if (s[i]) {s[i]--;}
                else if (s[m - i]) {s[m - i]--;}
            }
            ans += s[i] + s[m - i];
        }

        cout << ans << endl;
    }
}