#include <bits/stdc++.h>

using namespace std;

int helper(string &s, char c, int l, int r)
{
    int ans = 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            if (s[l] == c)
            {
                l++, ans++;
            }
            else if (s[r] == c)
            {
                r--, ans++;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            l++, r--;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int l = 0, r = n - 1;
        while (l < r && s[l] == s[r])
        {
            l++, r--;
        }
        int ans = (l >= r ? 0 : 100001);
        int cur = helper(s, s[l], l + 1, r);
        if (cur != -1)
        {
            ans = min(ans, cur);
        }
        cur = helper(s, s[r], l, r - 1);
        if (cur != -1)
        {
            ans = min(ans, cur);
        }
        cout << (ans == 100001 ? -1 : ans) << endl;
    }
}