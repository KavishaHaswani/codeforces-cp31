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
        vector<queue<int>> a(n);

        bool flag = false;
        unordered_map<int, int> count;
        for (int i = 0, tmp1, tmp2; i < n; i++)
        {
            cin >> tmp1;
            bool flag2 = true;
            for (int j = 0; j < tmp1; j++)
            {
                cin >> tmp2;
                a[i].push(tmp2);
                if (!count[tmp2])
                {
                    flag2 = false;
                }
                count[tmp2]++;
                // cout << count[tmp2] << " ";
            }
            // cout << endl;
            if (flag2)
            {
                flag = flag2;
            }
        }
        for (int i = 0, tmp; i < n && !flag; i++)
        {
            bool flag2 = true;
            while (!a[i].empty() && flag2)
            {
                tmp = a[i].front();
                a[i].pop();
                if (count[tmp] < 2)
                {
                    // cout << i << " " << tmp << " " << count[tmp] << endl;
                    flag2 = false;
                }
            }
            flag = flag2;
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}