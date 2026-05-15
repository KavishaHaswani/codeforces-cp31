#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, helper;
        bool isPos = true;

        cin >> n;
        while (n--)
        {
            cin >> helper;
            sum += helper;
            if (helper == -1)
            {
                isPos = !isPos;
            }
        }

        if (sum < 0)
        {
            helper = abs(sum) / 2 + abs(sum) % 2;
            if (helper % 2)
            {
                isPos = !isPos;
            }
        }
        else
        {
            helper = 0;
        }

        if (!isPos)
        {
            helper++;
        }

        cout << helper << endl;
    }
}