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

        int len = 1;
        while (len < n && a[n - len - 1] > len)
        {
            len++;
        }
        stack<int> ans;
        ans.push(len);
        for (int i = n - 2; i > -1; i--)
        {
            len--;
            if (len < i + 1 && a[i - len] > len)
            {
                len++;
            }
            ans.push(len);
        }
        while (!ans.empty())
        {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << endl;
    }
}