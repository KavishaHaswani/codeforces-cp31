#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_set<char> occured;
        int n = s.size(), l = min(n, 26);
        for (int i = 0; i < l; i++)
        {
            if (occured.count(s[i]))
            {
                l = i;
                break;
            }
            occured.insert(s[i]);
        }

        string s1 = s.substr(0, l);
        bool flag = true;
        for (int i = l; i < n && flag; i += l)
        {
            string s2 = s.substr(i, min(l, n - i));
            if (n - i < l)
            {
                s1 = s1.substr(0, n - i);
            }
            if (s1 != s2)
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}