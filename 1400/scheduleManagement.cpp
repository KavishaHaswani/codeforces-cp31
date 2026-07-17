#include <bits/stdc++.h>
using namespace std;

bool isPossible(map<int, int> &countPerWorker, int max, int n)
{
    long long availability = 0, jobs = 0;
    for (int i = 1; i <= n; i++)
    {
        if (countPerWorker[i] > max)
        {
            jobs += countPerWorker[i] - max;
        }
        else
        {
            availability += (max - countPerWorker[i]) / 2;
        }
    }
    // cout << max << " " << availability << " " << jobs << endl;
    return availability >= jobs;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> countPerWorker;
        for (int i = 0, tmp; i < m; i++)
        {
            cin >> tmp;
            countPerWorker[tmp]++;
        }

        int ans = m + 1;
        int min = 0, max = m;
        while (min <= max)
        {
            int mid = (min + max) / 2;
            if (isPossible(countPerWorker, mid, n))
            {
                ans = mid;
                max = mid - 1;
            }
            else
            {
                min = mid + 1;
            }
        }
        cout << ans << endl;
    }
}
