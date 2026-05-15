#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        vector<vector<int>> dp(a.size(), vector<int>(b.size(), 0));
        int maxi = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[0])
            {
                dp[i][0]++;
                maxi = 1;
            }
        }
        for (int j = 1; j < b.size(); j++)
        {
            if (a[0] == b[j])
            {
                dp[0][j]++;
                maxi = 1;
            }
        }
        for (int i = 1; i < a.size(); i++)
        {
            for (int j = 1; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    maxi = max(maxi, dp[i][j]);
                }
            }
        }
        cout << a.size() + b.size() - 2 * maxi << endl;
    }
}