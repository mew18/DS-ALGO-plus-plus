#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll modular_exponentiation(ll a, ll b, ll c)
{
    a = a % c;

    ll res = 1;

    while (b)
    {
        if (b & 1)
            res = ((res % c) * (a % c)) % c;
        a = ((a % c) * (a % c)) % c;
        b = b >> 1;
    }

    return res;
}

int main()
{
    ll a, b, c;
    cin >> a >> b>> c;

    cout << modular_exponentiation(a, b, c) << endl;

    return 0;
}