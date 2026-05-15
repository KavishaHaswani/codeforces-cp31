#include <bits/stdc++.h>

using namespace std;

bool notC(auto s, auto se, char c)
{
    while (s != se)
    {
        if (c != *s)
        {
            return true;
        }
        s++;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        int ans_count = 0, ans[2] = {-1, -1};
        if (notC(s.begin(), s.end() - 1, c))
        {
            ans[ans_count++] = n;
        }
        if (s[n - 1] != c)
        {
            ans[ans_count++] = n - 1;
        }

        bool ansCor = true;
        if (ans_count == 2)
        {
            for (int i = 2; i <= n; i++)
            {
                bool isPoss = true;
                for (int j = i; j <= n; j += i)
                {
                    if (s[j - 1] != c)
                    {
                        isPoss = false;
                        break;
                    }
                }
                if (isPoss)
                {
                    ansCor = false;
                    cout << "1\n"
                         << i << endl;
                    break;
                }
            }
        }
        if (ansCor)
        {
            cout << ans_count << endl;
            while (ans_count--)
            {
                cout << ans[ans_count] << " ";
            }
            if (ans[0] != -1)
            {
                cout << "\n";
            }
        }
    }
}