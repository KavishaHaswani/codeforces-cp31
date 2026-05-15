#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        string s;
        cin >> n >> s;
        unordered_set<char> occured;
        for (int i = 0; i < n; i++)
        {
            if (!occured.count(s[i]))
            {
                ans += n - i;
                occured.insert(s[i]);
            }
        }
        cout << ans << endl;
    }
}