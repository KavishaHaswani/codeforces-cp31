#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, d, ans = 0;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end(), greater<int>());
    int l = (p[n - 1] > d? n - 1: 0), r = (p[0] <= d? 0: n - 1), i = 0;
    while (l < r)
    {
        i = (l + r) / 2;
        if (p[i] <= d && (i == 0 || p[i - 1] > d))
        {
            break;
        }
        else if (p[i] > d)
        {
            l = i + 1;
        }
        else
        {
            r = i - 1;
        }
    }
    n -= i;
    ans += i;
    while (i < p.size() && ceil(1.0 * (d + 1) / p[i]) <= n)
    {
        n -= ceil(1.0 * (d + 1) / p[i]);
        ans++;
        i++;
    }
    cout << ans;
}