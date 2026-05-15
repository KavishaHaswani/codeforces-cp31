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
        vector<int> change(n);
        int prev, prevDifferent = -1;
        cin >> prev;
        for (int i = 2, temp; i <= n; i++)
        {
            cin >> temp;
            if (temp != prev)
            {
                prevDifferent = i;
            }
            prev = temp;
            change[i - 1] = prevDifferent;
        }

        int q;
        cin >> q;
        for (int i = 0, l, r; i < q; i++)
        {
            cin >> l >> r;
            if (change[r - 1] > l)
            {
                cout << change[r - 1] - 1 << " " << change[r - 1] << endl;
            }
            else
            {
                cout << "-1 -1\n";
            }
        }
        cout << endl;
    }
}