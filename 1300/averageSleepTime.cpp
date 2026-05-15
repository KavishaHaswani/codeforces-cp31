#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    long long cur = 0;
    for (int i = 0; i < k; i++)
    {
        cur += a[i];
    }
    long long sum = cur;
    for (int i = k; i < n; i++)
    {
        cur -= (long long)a[i - k];
        cur += (long long)a[i];
        sum += cur;
    }
    printf("%.6lf\n", 1.0 * sum / (n - k + 1));
}