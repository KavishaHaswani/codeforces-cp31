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
        vector<pair<int, int>> students(n);
        for (int i = 0; i < n; i++)
        {
            cin >> students[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> students[i].second;
        }
        sort(students.begin(), students.end(), greater<>());

        vector<long long> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j + 1 < n && students[j + 1].first == students[j].first)
            {
                j++;
            }

            int sz = j - i + 1;
            vector<long long> tempSum(sz + 1);
            tempSum[0] = students[i].second;
            for (int k = 1; k <= sz; k++)
            {
                tempSum[k] = tempSum[k - 1] + students[i + k].second;
            }

            for (int k = 1; k <= sz; k++)
            {
                ans[k - 1] += tempSum[(sz / k) * k - 1];
            }

            i = j;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
