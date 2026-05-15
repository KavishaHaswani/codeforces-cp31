#include <iostream>
#include <vector>

using namespace std;

int gcdCalculator(int s, int l) {
    if (!(l % s)) {return s;}
    return gcdCalculator(l % s, s);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, gcd = 10000000;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            gcd = min(a[i], gcd);
        }

        for (int i = 0; i < n && gcd > 2; i++)
        {
            for (int j = i + 1; j < n && gcd > 2; j++) {
                gcd = gcdCalculator(a[i], a[j]);
            }
        }

        if (gcd <= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}