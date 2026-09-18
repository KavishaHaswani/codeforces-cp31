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
        for (auto &i : a)
        {
            cin >> i;
        }

        int XOR = 0;
        for (auto i : a)
        {
            XOR ^= i;
        }
        if (XOR == 0) {
            cout << "YES\n";
            continue;
        }

        int countSegs = 0;
        for (int i = 0, xorCur = 0; i < n; i++)
        {
            xorCur ^= a[i];
            if (xorCur == XOR)
            {
                xorCur = 0;
                countSegs++;
            }
        }

        cout << (countSegs > 2 ? "YES" : "NO") << endl;
    }
}
