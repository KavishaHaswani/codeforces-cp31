#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0, temp; i < n; i++)
        {
            cin >> temp;
            nums.push_back(temp);
        }
        
        set<int> hs;
        bool flag = true;
        for (int i : nums)
        {
            if (hs.count(k + i) || hs.count(i - k))
            {
                cout << "YES\n";
                flag = false;
                break;
            }
            hs.insert(i);
        }

        if (flag)
        {
            cout << "NO\n";
        }
    }
}