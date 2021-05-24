#include <bits/stdc++.h>
#define ll unsigned long long int
#define MAX_SIZE 999999

using namespace std;

vector<ll> primes;

void nth_prime()
{
    unsigned short int p[MAX_SIZE];
    memset(p, 0, sizeof(p));

    for (int i = 3; i <= MAX_SIZE; i += 2)
    {
        p[i] = 1;
    }

    for (ll i = 3; i <= MAX_SIZE; i += 2)
    {
        if (p[i] == 1)
        {
            for (ll j = i * i; j <= MAX_SIZE; j += i)
            {
                p[j] = 0;
            }
        }
    }

    p[1] = p[0] = 0;
    p[2] = 1;

    for (int i = 0; i <= MAX_SIZE; ++i)
    {
        if (p[i] == 1)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    nth_prime();

    while (t--)
    {
        int n;
        cin >> n;
        cout << primes[n-1] << endl;
    }

    return 0;
}