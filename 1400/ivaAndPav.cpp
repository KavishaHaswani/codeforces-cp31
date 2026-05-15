#include <bits/stdc++.h>

using namespace std;

vector<int> pows(30);
int p = 29;

bool valid(vector<vector<int>> &pre, int l, int r, int k)
{
    int len = r - l + 1, a = 0;
    for (int i = p; i > -1; i--)
    {
        if (pre[r][i] - pre[l - 1][i] == len)
        {
            a += pows[i];
        }
    }
    return k <= a;
}

void binSearch(vector<vector<int>> &pre, int l, int n, int k)
{
    int i = l, j = n, m, ans = -1;
    while (i <= j)
    {
        m = (i + j) / 2;
        if (valid(pre, l, m, k))
        {
            ans = m;
            i = m + 1;
        }
        else
        {
            j = m - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    pows[0] = 1;
    for (int j = 1; j <= p; j++)
    {
        pows[j] = pows[j - 1] * 2;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        vector<vector<int>> pre(n + 1, vector<int>(30));
        for (int j = p; j > -1; j--)
        {
            pre[0][j] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = p; j > -1; j--)
            {
                if (pows[j] <= a[i - 1])
                {
                    pre[i][j] = 1 + pre[i - 1][j];
                    a[i - 1] -= pows[j];
                }
                else
                {
                    pre[i][j] = pre[i - 1][j];
                }
            }
        }

        int q;
        cin >> q;
        for (int i = 0, l, k; i < q; i++)
        {
            cin >> l >> k;
            binSearch(pre, l, n, k);
        }
    }
}