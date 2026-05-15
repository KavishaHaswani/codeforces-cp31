#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> b;
        for (int i = 0, e; i < n; i++)
        {
            cin >> e;
            b.insert(e);
        }
        if (b.size() < n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}