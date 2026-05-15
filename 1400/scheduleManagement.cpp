#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> a, int threshold)
{
    // cout << threshold << " ";
    int n = a.size();
    int i = 0, count = 0;
    while (i < n && a[i] >= threshold)
    {
        count += a[i++] - threshold;
    }
    while (i < n) {
        int temp = (threshold - a[i++]) / 2;
        if (temp >= count)
        {
            // cout << "True\n";
            return true;
        }
        count -= temp;
    }
    // cout << "False\n";
    return !count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n, 0);
        for (int i = 0, temp; i < m; i++)
        {
            cin >> temp;
            a[temp - 1]++;
        }
        sort(a.begin(), a.end(), greater<>());
        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        int start = 1, end = m / n + 1;
        int mid, ans = end;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (solve(a, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
}