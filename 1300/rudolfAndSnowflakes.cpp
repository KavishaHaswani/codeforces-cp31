#include <bits/stdc++.h>

using namespace std;

void preCom(int n, unordered_set<int> &a)
{
    for (int i = sqrt(n); i > 1; i--)
    {
        int mul = i, sum = 1 + i;
        while (true)
        {
            mul *= i;
            sum += mul;
            if (sum > n)
            {
                break;
            }
            a.insert(sum);
        }
    }
}

int main()
{
    unordered_set<int> isValid;
    preCom(1e6, isValid);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isValid.count(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}