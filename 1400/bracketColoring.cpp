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
        if (n % 2)
        {
            cout << -1 << endl;
            continue;
        }

        int c = 0, k = 1;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                if (c < 0)
                {
                    ans[i] = 2;
                    k = 2;
                }
                else
                {
                    ans[i] = 1;
                }
                c++;
            }
            else
            {
                if (c <= 0)
                {
                    ans[i] = 2;
                }
                else
                {
                    ans[i] = 1;
                }
                c--;
            }
        }
        if (c != 0)
        {
            cout << -1 << endl;
            continue;
        }
        if (k == 2)
        {
            bool flag = true;
            for (int i = 1; i < n; i++)
            {
                if (ans[i] != ans[i - 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                k = 1;
                for (int i = 0; i < n; i++)
                {
                    ans[i] = 1;
                }
            }
        }
        cout << k << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}