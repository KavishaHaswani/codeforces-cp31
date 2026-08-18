#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> deleteDecision(n + 1, false); // false -> delete, true -> stays
    for (int i = 1, tmpPar, tmpR; i <= n; i++)
    {
        cin >> tmpPar >> tmpR;
        if (!tmpR)
        {
            deleteDecision[i] = true;
            if (tmpPar != -1)
                deleteDecision[tmpPar] = true;
        }
    }

    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (!deleteDecision[i])
        {
            cout << i << " ";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << -1;
    }
    cout << endl;
}