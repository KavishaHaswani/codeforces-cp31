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
        vector<int> c(n);
        for (int &i : c)
        {
            cin >> i;
        }
        sort(c.begin(), c.end());

        long long sum = 1;
        bool flag = c[0] == 1;
        for (int i = 1; i < n && flag; i++)
        {
            if (c[i] > sum)
            {
                flag = false;
            }
            sum += c[i];
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