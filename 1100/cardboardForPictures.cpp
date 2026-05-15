#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> s(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        // (a + d)^2 + (b + d)^2 +... = c
        // (a^2 + b^2 + …) + (n * d^2) + 2(a + b + …)d = c
        // n.d^2 + 2(a + b + …).d - c + (a^2 + b^2 + …) = 0
        // ans = d =
        long long sum = accumulate(s.begin(), s.end(), 0ll),
                  squareSumMinusC = -c + accumulate(s.begin(), s.end(), 0ll, [](long long sum, long long num)
                                                    { return sum + num * num; }),
                  D = 2ll * sqrt(1.0L * sum * sum + 1.0L * n * (-squareSumMinusC));
        cout << (D - 2 * sum) / (4 * n) << endl;
    }
}