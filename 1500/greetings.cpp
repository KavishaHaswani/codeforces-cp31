#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end());

        tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> st;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += i - st.order_of_key(a[i].second);
            st.insert(a[i].second);
        }

        cout << ans << endl;
    }
}
