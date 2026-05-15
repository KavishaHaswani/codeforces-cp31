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
        vector<long long> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        for (long long i = 2; i < 1e18; i *= 2)
        {
            unordered_set<long long> rems;
            for (int j = 0; j < n; j++)
            {
                rems.insert(a[j] % i);
                if (rems.size() > 1)
                {
                    break;
                }
            }
            if (rems.size() > 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
}