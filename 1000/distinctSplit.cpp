#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pre{0}, post{0};
        unordered_set<char> pr, po;
        for (char c : s)
        {
            pre.push_back(pre.back() + (!pr.count(c)? 1: 0));
            pr.insert(c);
        }
        reverse(s.begin(), s.end());
        for (char c : s)
        {
            post.push_back(post.back() + (!po.count(c)? 1: 0));
            po.insert(c);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, pre[i + 1] + post[n - 1 - i]);
        }
        cout << ans << endl;
    }
}