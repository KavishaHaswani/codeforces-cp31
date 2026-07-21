#include <bits/stdc++.h>
using namespace std;

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
        while (l <= r && s[l] != '*')
        {
            l++;
        }
        while (l <= r && s[r] != '*')
        {
            r--;
        }
        if (l >= r)
        {
            cout << 0 << endl;
            continue;
        }

        vector<long long> steps(n, 0);
        int sheeps = 1;
        for (int i = l + 1; i < r; i++)
        {
            if (s[i] == '*')
            {
                sheeps++;
                steps[i] = steps[i - 1];
            }
            if (s[i] == '.')
            {
                steps[i] = steps[i - 1] + sheeps;
            }
        }
        long long tmp = 0;
        sheeps = 1;
        for (int i = r - 1; i > l; i--)
        {
            if (s[i] == '*')
            {
                sheeps++;
                steps[i] += tmp;
            }
            if (s[i] == '.')
            {
                tmp += sheeps;
                steps[i] += tmp;
            }
        }

        long long ans = 1e13;
        for (int i = l + 1; i < r; i++)
        {
            ans = min(ans, steps[i] - (s[i] == '.'));
        }
        cout << (ans == 1e13 ? 0 : ans) << endl;
    }
}
