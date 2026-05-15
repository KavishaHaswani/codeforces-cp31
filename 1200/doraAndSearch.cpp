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
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }

        int l = 1, r = n;
        int i = 0, j = n - 1;
        while (i < j - 2)
        {
            if (a[i] == l)
            {
                l++, i++;
            }
            else if (a[j] == l)
            {
                l++, j--;
            }
            else if (a[i] == r)
            {
                r--, i++;
            }
            else if (a[j] == r)
            {
                r--, j--;
            }
            else
            {
                break;
            }
        }

        if (i >= j - 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << i + 1 << " " << j + 1 << endl;
        }
    }
}