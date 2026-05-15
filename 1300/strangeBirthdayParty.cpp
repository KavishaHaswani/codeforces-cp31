#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> k(n), c(m);
        for (auto &i : k)
        {
            cin >> i;
        }
        for (auto &j : c)
        {
            cin >> j;
        }

        sort(k.begin(), k.end(), greater<>());
        int curGift = m - 1, totGifts = 0;
        long long ans = 0;
        for (auto i : k)
        {
            curGift = min(curGift, i - 2);
            while (c[curGift] == c[i - 1])
            {
                curGift--;
            }
            if (curGift >= 0 && c[i - 1] > c[totGifts])
            {
                ans += (long long)c[totGifts++];
                curGift--;
            }
            else
            {
                ans += (long long)c[i - 1];
            }
        }

        cout << ans << endl;
    }
}