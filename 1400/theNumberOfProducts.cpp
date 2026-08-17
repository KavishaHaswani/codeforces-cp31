#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count[2] = {0, 0}; // count of 1, -1
    int cur = 1;
    for (auto &i : a)
    {
        cin >> i;
        i = (i < 0 ? -1 : 1);
        cur *= i;
        count[(1 - cur) / 2]++;
    }

    long long neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && a[i - 1] * a[i] != a[i])
        {
            swap(count[0], count[1]);
        }
        neg += count[1];
        pos += count[0];
        count[(1 - a[i]) / 2]--;
    }

    cout << neg << " " << pos << endl;
}