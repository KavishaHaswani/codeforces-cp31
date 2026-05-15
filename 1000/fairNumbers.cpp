#include <iostream>

using namespace std;

bool isFair(long long n)
{
    for (long long i = n, r; i > 0; i /= 10)
    {
        r = i % 10;
        if (r != 0 && n % r != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (!isFair(n))
        {
            n++;
        }
        cout << n << endl;
    }
}