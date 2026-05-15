#include <bits/stdc++.h>

using namespace std;

struct node
{
    bool color;
    vector<node *> children;
    int black, white;
    node()
    {
        color = false;
        black = 0;
        white = 0;
    }
};

int helper(node *root)
{
    int ans = 0;
    for (auto i : root->children)
    {
        ans += helper(i);
        root->black += i->black;
        root->white += i->white;
    }
    if (!root->color)
    {
        root->black++;
    }
    else
    {
        root->white++;
    }
    // cout << root->black << " " << root->white << endl;
    if (root->black == root->white)
    {
        ans++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, node *> mp;
        mp[1] = new node();
        for (int i = 2, tmp; i <= n; i++)
        {
            cin >> tmp;
            mp[i] = new node();
            mp[tmp]->children.push_back(mp[i]);
        }

        string s;
        cin >> s;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == 'W') {mp[i]->color = true;}
        }

        cout << helper(mp[1]) << endl;
    }
}