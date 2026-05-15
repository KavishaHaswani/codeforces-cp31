#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> pows(30);
    for (int i = 0, mul = 1; i < 30; i++)
    {
        pows[i] = mul;
        mul *= 2;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> count;
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            for (int j = 29; j > -1 && tmp; j--)
            {
                if (pows[j] <= tmp)
                {
                    count[j]++;
                    tmp -= pows[j];
                }
            }
        }
        int g = (count.begin() == count.end() ? 0 : (*count.begin()).second);
        for (auto i : count)
        {
            g = __gcd(g, i.second);
        }

        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            if (g % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}