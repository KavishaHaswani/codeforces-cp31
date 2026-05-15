#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 2, cur = 2;
        string s;
        cin >> n >> s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cur++;
                ans = max(ans, cur);
            }
            else
            {
                cur = 2;
            }
        }
        cout << ans << endl;
    }
}