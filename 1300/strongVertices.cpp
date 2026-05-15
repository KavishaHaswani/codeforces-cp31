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
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }
        int mx = -2e9;
        vector<int> ans;
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            if (a[i] - tmp > mx)
            {
                mx = a[i] - tmp;
                ans.clear();
            }
            if (a[i] - tmp >= mx)
            {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        if (ans.size())
        {
            cout << endl;
        }
    }
}