#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if ((a + b < n - 1) || (a == b && b == n)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}