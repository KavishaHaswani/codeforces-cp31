#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<long long, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        for (int i = 0, j; i < n; i++)
        {
            j = i + 1;
            while (j < n && a[j].first <= a[j - 1].first)
            {
                a[j].first += a[j - 1].first;
                j++;
            }
            if (j < n)
            {
                a[j].first += a[j - 1].first;
            }
            while (i < j)
            {
                ans[a[i++].second] += j - 1;
            }
            i--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}