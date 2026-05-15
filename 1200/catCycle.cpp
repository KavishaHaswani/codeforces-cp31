#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans;
        cin >> n >> k;
        if (n % 2 == 1 && k >= (n + 1) / 2)
        {
            ans = k % n + 1 + (k - ((n + 1) / 2)) / (n / 2);
            ans %= n;
        }
        else
        {
            ans = k % n;
        }
        cout << (ans ? ans : n) << endl;
    }
}