#include <iostream>

using namespace std;

int xorNaturalNums(int limit)
{
    int r = limit % 4;
    switch (r)
    {
    case 0:
        return limit;
    case 1:
        return 1;
    case 2:
        return limit + 1;
    case 3:
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b;
        x = xorNaturalNums(a - 1);
        cout << a + (x == b ? 0 : ((x ^ b) == a ? 2 : 1)) << endl;
    }
}