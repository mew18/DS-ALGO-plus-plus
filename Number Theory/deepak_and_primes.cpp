#include <bits/stdc++.h>
#define ll unsigned long long int
#define MAX_SIZE 999999

using namespace std;

void nth_prime(ll n)
{
    unsigned short int p[MAX_SIZE];
    memset(p, 0, sizeof(p));

    // cout << "0";

    for (ll i = 3; i <= MAX_SIZE; i += 2)
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

    ll pos;
    ll count = 0;
    for (ll i = 0; i <= MAX_SIZE; ++i)
    {
        if (p[i] == 1)
        {
            ++count;

            if (count == n)
            {
                pos = i;
                break;
            }
        }
    }
    cout << pos << endl;
}

int main()
{
    ll n;
    cin >> n;
    nth_prime(n);

    return 0;
}