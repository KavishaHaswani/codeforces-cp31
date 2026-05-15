#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        unordered_set<char> found;
        int j = t.size() - 1;
        for (int i = s.size() - 1; i > -1 && j > -1; i--)
        {
            if (s[i] == t[j])
            {
                if (!found.count(t[j]))
                {
                    j--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                found.insert(s[i]);
            }
        }
        if (j == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}