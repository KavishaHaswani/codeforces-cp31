#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<char> s(str.begin(), str.end());

    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            char c = 'a';
            while (s[i - 1] == c || (i + 1 < n && s[i + 1] == c))
            {
                c++;
            }
            s[i] = c;
        }
    }
    cout << string(s.begin(), s.end()) << endl;
}