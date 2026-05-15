#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<pair<int, int>> &segs, int m)
{
    // cout << "m = " << m << endl;
    int l = 0, r = 0;
    for (int i = 0, f, s; i < segs.size(); i++)
    {
        l = max(segs[i].first, l - m), r = min(segs[i].second, r + m);
        if (l > r) {return false;}
        // cout << l << " " << r << endl;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> segments(n);
        for (auto &i : segments)
        {
            cin >> i.first >> i.second;
        }
        int l = 0, r = 1e9, m, ans = r;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (isValid(segments, m))
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << ans << endl;
    }
}