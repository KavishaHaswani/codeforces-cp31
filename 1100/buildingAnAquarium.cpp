#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (long long &i : a)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        long long l = 1, r = (x + accumulate(a.begin(), a.end(), 0ll)) / n + 1,
                  h = 0;
        while (l <= r)
        {
            long long mid = (l + r) / 2, colSum = mid * n;
            for (long long i : a)
            {
                if (i >= mid)
                {
                    break;
                }
                colSum += i - mid;
            }
            if (mid * n - colSum == x)
            {
                h = mid;
                break;
            }
            else if (mid * n - colSum < x)
            {
                h = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << h << endl;
    }
}