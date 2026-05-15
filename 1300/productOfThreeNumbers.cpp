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
        int sr = sqrt(n);
        vector<int> ans;
        for (int i = 2; i <= sr; i++)
        {
            if (n % i == 0)
            {
                ans.push_back(i);
                n /= i;
                sr = sqrt(n);
            }
            if (ans.size() == 2)
            {
                break;
            }
        }
        if (n == 1 || ans.size() < 2 || n == ans[0] || n == ans[1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n"
                 << ans[0] << " " << ans[1] << " " << n << endl;
        }
    }
}