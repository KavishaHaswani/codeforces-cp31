#include <bits/stdc++.h>
using namespace std;

int modFactorial(int n, int mod)
{
    long long ans = 1;
    while (n)
    {
        ans = (ans * n) % mod;
        n--;
    }
    return (int)ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size(), count = 0, mod = 998244353;
        long long posOp = 1;
        for (int i = 0, c; i < n; i++)
        {
            c = 1;
            while (i + 1 < n && s[i + 1] == s[i])
            {
                i++, c++;
            }
            count += c - 1;
            posOp = posOp * c % mod;
        }
        cout << count << " " << posOp * modFactorial(count, mod) % mod << endl;
    }
}