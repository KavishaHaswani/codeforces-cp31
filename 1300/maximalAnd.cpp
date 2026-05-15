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

        vector<int> pows(31);
        pows[0] = 1;
        for (int j = 1; j <= 30; j++)
        {
            pows[j] = pows[j - 1] * 2;
        }

        unordered_map<int, int> count;
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            for (int j = 30; j > -1 && tmp; j--)
            {
                if (pows[j] <= tmp)
                {
                    count[j]++;
                    tmp -= pows[j];
                }
            }
        }

        long long ans = 0;
        for (int j = 30; j > -1; j--)
        {
            if (n - count[j] <= k)
            {
                // cout << j << " " << n - count[j] << " " << k << endl;
                k -= (n - count[j]);
                ans += (long long)pows[j];
            }
        }
        cout << ans << endl;
    }
}