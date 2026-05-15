#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &j : b)
    {
        cin >> j;
    }

    int i = 0, j = 0, ans = 0;
    vector<bool> fined(n, 0);
    while (i < n && j < n)
    {
        if (a[i] == b[j])
        {
            i++;
            while (i < n && fined[a[i]])
            {
                i++;
            }
            j++;
        }
        else
        {
            fined[b[j]] = true;
            ans++;
            j++;
        }
    }
    cout << ans << endl;
}