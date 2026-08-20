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

        sort(a.begin(), a.end(), greater<>());

        long long ans = accumulate(a.begin(), a.end(), 0ll);
        long long rem = ans / 2;
        ans = (ans + 1) / 2;
        for (auto i: a)
        {
            if (rem <= 0) {
                break;
            }
            rem -= i;
            ans++;
        }

        cout << ans << endl;
    }
}
