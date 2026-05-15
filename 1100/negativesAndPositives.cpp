#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long t, sum = 0, mn = 1000000001;
        bool subtract = false;
        while (n--)
        {
            cin >> t;
            sum += abs(t);
            mn = min(mn, abs(t));
            if (t < 0)
            {
                subtract = !subtract;
            }
        }
        if (subtract)
        {
            sum -= 2 * mn;
        }
        cout << sum << endl;
    }
}