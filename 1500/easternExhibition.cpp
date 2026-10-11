#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> cords)
{
    if (cords.size() % 2 == 1)
    {
        return 1;
    }
    int median = (cords.size() - 1) / 2;
    return cords[median + 1] - cords[median] + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        cout << 1ll * solve(x) * solve(y) << endl;
    }
}
