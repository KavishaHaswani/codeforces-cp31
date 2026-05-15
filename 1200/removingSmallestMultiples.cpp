#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string T;
        cin >> n >> T;

        vector<bool> deleted(n + 1, false);
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (T[i - 1] == '0')
            {
                if (!deleted[i]) {
                    sum += i;
                    deleted[i] = true;
                }
                for (int j = i + i; j <= n; j += i) {
                    if (T[j - 1] == '1') {break;}
                    if (!deleted[j]) {
                        sum += i;
                        deleted[j] = true;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}