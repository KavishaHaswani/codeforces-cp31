#include <algorithm>
#include <climits>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        unordered_set<int> mp;
        int mini = INT_MAX;
        for (int i = 0, t; i < n; i++)
        {
            cin >> t;
            mp.insert(t);
            a.push_back(t);
            mini = min(mini, t);
        }
        if (mp.size() < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int t = count(a.begin(), a.end(), mini);
            cout << t << " " << a.size() - t << endl;
            for (int i = 0; i < t; i++)
            {
                cout << mini << " ";
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != mini)
                {
                    cout << a[i] << " ";
                }
            }
            cout << endl;
        }
    }
}