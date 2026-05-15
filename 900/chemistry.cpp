#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        unordered_map<char, int> count;
        for (char c : s)
        {
            count[c]++;
        }
        int min = 0;
        for (auto i : count)
        {
            if (i.second % 2 == 1)
            {
                min++;
            }
        }
        if (min <= k + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}