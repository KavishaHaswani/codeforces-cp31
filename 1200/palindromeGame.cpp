#include <bits/stdc++.h>

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
        int count[2] = {0, 0};
        for (char c : s)
        {
            count[c - '0']++;
        }
        cout << (count[0] % 2 == 0 || count[0] == 1 ? "BOB\n" : "ALICE\n");
    }
}