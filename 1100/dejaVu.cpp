#include <iostream>
#include <vector>

using namespace std;

void pow2(vector<long long> &pows, int n)
{
    for (int i = 0, cur = 1; i <= n; i++)
    {
        pows.push_back(cur);
        cur *= 2;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<int> x(q);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        
        vector<long long> pows2;
        pow2(pows2, 30);
        int minProcessed = 31;
        for (int i = 0; i < q; i++)
        {
            if (x[i] >= minProcessed)
            {
                continue;
            }
            minProcessed = min(minProcessed, x[i]);
            long long p = pows2[x[i]];
            for (int j = 0; j < n; j++)
            {
                if (a[j] % p == 0)
                {
                    a[j] += p / 2;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}