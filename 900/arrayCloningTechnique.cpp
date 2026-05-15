#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, ans = 0;
        cin >> n;
        unordered_map<int, int> count; // number, occurences
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            count[a]++;
        }
        a = 1;
        for (auto i : count)
        {
            if (i.second > a)
            {
                a = i.second;
            }
        }
        while (a < n)
        {
            ans += min(n - a, a);
            a *= 2;
            ans++; 
        }
        cout << ans << endl;
    }
}