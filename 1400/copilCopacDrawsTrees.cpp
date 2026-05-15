#include <bits/stdc++.h>

using namespace std;

int dfs(unordered_map<int, vector<pair<int, int>>> &m,
        vector<int> &visited, int i, int prev)
{
    int ans = 0;
    for (auto j: m[i]) {
        if (!visited[j.first]) {
            visited[j.first] = true;
            ans = max(ans, (prev > j.second) + dfs(m, visited, j.first, j.second));
        }
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
        unordered_map<int, vector<pair<int, int>>> m; // node -> {node, index}
        for (int i = 1, u, v; i < n; i++)
        {
            cin >> u >> v;
            m[u].push_back({v, i});
            m[v].push_back({u, i});
        }

        vector<int> visited(n + 1, false);
        visited[1] = true;
        cout << dfs(m, visited, 1, n + 1) << endl;
    }
}