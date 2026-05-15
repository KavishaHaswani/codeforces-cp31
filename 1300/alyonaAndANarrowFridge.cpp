#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    int ans = 1;
    multiset<int> s;
    for (int i = 0, sum; i < n; i++)
    {
        s.insert(a[i]);
        sum = 0;
        auto j = s.rbegin();
        while (j != s.rend()) {
            sum += *j;
            if (distance(j, s.rend()) > 1) {advance(j, 2);}
            else {advance(j, 1);}
        }
        if (sum > h) {break;}
        ans = i + 1;
    }
    cout << ans << endl;
}