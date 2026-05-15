#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = -1, b, ans = 1;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0, cur = 0; i < n; i++)
        {
            cin >> b;
            cur = (a == b ? cur + 1 : 1);
            a = b;
            if (!mp.count(a) || mp[a] < cur)
            {
                mp[a] = cur;
                ans = max(ans, mp[a]);
            }
        }
        for (int i = 0, cur = 0; i < n; i++)
        {
            cin >> b;
            cur = (a == b ? cur + 1 : 1);
            a = b;
            ans = max(ans, cur + (mp.count(a) ? mp[a] : 0));
        }
        cout << ans << endl;
    }
}