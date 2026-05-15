#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

long long process(int d)
{
    vector<int> multiples;
    for (int i = d + 1;; i++)
    {
        bool flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            multiples.push_back(i);
            i += d - 1;
        }
        if (multiples.size() > 1)
        {
            break;
        }
    }

    return min((long long)pow(multiples[0], 3), (long long)multiples[0] * multiples[1]);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        cout << process(d) << endl;
    }
}