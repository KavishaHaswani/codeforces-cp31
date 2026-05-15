#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<char> s(str.begin(), str.end());
    int n = s.size();

    vector<int> wBefore(n), wAfter(n);
    wBefore[0] = 0;
    wAfter[n - 1] = 0;
    for (int i = 1; i < n; i++)
    {
        wBefore[i] = wBefore[i - 1] + (s[i] == 'v' && s[i - 1] == 'v');
        wAfter[n - i - 1] = wAfter[n - i] + (s[n - i - 1] == 'v' && s[n - i] == 'v');
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            ans += (long long)wBefore[i] * wAfter[i];
        }
    }
    cout << ans << endl;
}