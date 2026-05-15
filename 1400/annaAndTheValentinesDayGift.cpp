#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        priority_queue<int> zerosCount;
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            int curZeros = 0;
            while (!(tmp % 10))
            {
                curZeros++;
                tmp /= 10;
            }
            zerosCount.push(curZeros);
            while (tmp)
            {
                count++;
                tmp /= 10;
            }
        }

        int s = zerosCount.size() / 2;
        while (s--)
        {
            zerosCount.pop();
            count += zerosCount.top();
            zerosCount.pop();
        }
        if (count > m)
        {
            cout << "Sasha\n";
        }
        else
        {
            cout << "Anna\n";
        }
    }
}