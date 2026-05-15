#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    vector<int> d = {1, -1};

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq, ans = 0;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        unordered_map<int, unordered_set<int>> pos_k;
        unordered_map<int, unordered_set<int>> pos_q;
        for (int i : d)
        {
            for (int j : d)
            {
                pos_k[xk + a * i].insert(yk + b * j);
                pos_k[xk + b * i].insert(yk + a * j);
            }
        }
        for (int i : d)
        {
            for (int j : d)
            {
                if (pos_k[xq + a * i].count(yq + b * j) &&
                    !pos_q[xq + a * i].count(yq + b * j))
                {
                    ans++;
                    pos_q[xq + a * i].insert(yq + b * j);
                }
                if (pos_k[xq + b * i].count(yq + a * j) &&
                    !pos_q[xq + b * i].count(yq + a * j))
                {
                    ans++;
                    pos_q[xq + b * i].insert(yq + a * j);
                }
            }
        }
        cout << ans << endl;
    }
}