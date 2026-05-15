#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cur = 0, mini = 19;
        while (s.size() > 1 && cur != mini)
        {
            while (s.size() > 2 && s[s.size() - 1] != '0' && s[s.size() - 1] != '5')
            {
                s.erase(s.end() - 1);
                cur++;
            }
            string temp = s;
            while (temp.size() > 2 && stoi(temp.substr(temp.size() - 2)) % 25 != 0)
            {
                temp.erase(temp.end() - 2, temp.end() - 1);
            }
            if (stoi(temp.substr(temp.size() - 2)) % 25 == 0)
            {
                mini = min(mini, (int)(cur + s.size() - temp.size()));
            }
            s.erase(s.size() - 1);
            cur++;
        }
        cout << mini << endl;
    }
}