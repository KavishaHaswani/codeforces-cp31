#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int count[2] = {0, 0};
        for (char c : a)
        {
            count[c - '0']++;
        }

        bool switched = false, canBeConverted = true;
        for (int i = n - 1; i > -1; i--)
        {
            if ((!switched && a[i] != b[i]) || (switched && a[i] == b[i]))
            {
                if (count[0] != count[1])
                {
                    canBeConverted = false;
                    break;
                }
                switched = !switched;
            }
            count[a[i] - '0']--;
        }
        if (canBeConverted)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}