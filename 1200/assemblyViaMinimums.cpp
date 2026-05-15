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
        map<int, int> m;
        for (int i = n * (n - 1) / 2, temp; i > 0; i--)
        {
            cin >> temp;
            m[temp]++;
        }
        n--;
        int mx;
        for (auto i : m)
        {
            while (i.second > 0)
            {
                cout << i.first << " ";
                i.second -= n;
                n--;
            }
            mx = i.first;
        }
        while (n > -1)
        {
            cout << mx << " ";
            n--;
        }
        cout << endl;
    }
}