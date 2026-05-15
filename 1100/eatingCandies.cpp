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
        vector<int> w(n);
        for (int &i : w)
        {
            cin >> i;
        }

        int ans = 0, l = 0, r = n - 1, lSum = 0, rSum = 0;
        while (l <= r + 1)
        {
            if (lSum == rSum)
            {
                ans = max(ans, l + n - r - 1);
                lSum += w[l++];
                rSum += w[r--];
            }
            else if (lSum < rSum)
            {
                lSum += w[l++];
            }
            else
            {
                rSum += w[r--];
            }
        }
        cout << ans << endl;
    }
}