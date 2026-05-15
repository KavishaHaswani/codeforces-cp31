#include <bits/stdc++.h>
using namespace std;

void findPrimes(vector<int> &primes, int n)
{
    vector<bool> seive(n + 1, false);
    for (long long i = 2; i <= n; i++)
    {
        if (seive[i])
        {
            continue;
        }
        primes.push_back(i);
        for (long long j = i * i; j <= n; j += i)
        {
            seive[j] = true;
        }
    }
}

void factorize(unordered_map<int, int> &factors, vector<int> &primes, int n)
{
    for (int i : primes)
    {
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
        if (n == 0)
        {
            return;
        }
    }
}

int main()
{
    vector<int> primes;
    findPrimes(primes, 1e6);
    // cout << primes.size() << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> count;
        for (int i = 0, temp; i < n; i++)
        {
            cin >> temp;
            factorize(count, primes, temp);
        }

        bool flag = true;
        for (auto i : count)
        {
            if (i.second % n != 0)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}