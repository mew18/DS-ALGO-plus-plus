#include <bits/stdc++.h>
#define ui unsigned short int
#define ll unsigned long long int

using namespace std;

int main()
{
    ui t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll pow = 1;

        while (pow <= n)
        {
            pow = (pow << 1);
        }
        pow /= 2;

        ll res = (n - pow) + 1;
        cout << res << endl;
    }

    return 0;
}
