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
        vector<int> p(n);
        for (int &i : p)
        {
            cin >> i;
        }

        vector<int> ans;
        ans.push_back(p[0]);
        int i = p[0], j = p[1], k;
        for (int l = 2; l < n; l++)
        {
            k = p[l];
            if ((j - i > 0 && k - j < 0) || (j - i < 0 && k - j > 0))
            {
                ans.push_back(j);
                i = j;
                j = k;
            }
            if (abs(k - i) > abs(j - i))
            {
                j = k;
            }
        }
        ans.push_back(j);
        cout << ans.size() << endl;
        for (int i : ans)
        {
            cout << i << " ";
        }
        if (ans.size())
        {
            cout << endl;
        }
    }
}