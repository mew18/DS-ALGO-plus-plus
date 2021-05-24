#include <bits/stdc++.h>
#define ui unsigned short int

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n==0 or n==1)
        {
            cout << "1" << endl;
            return 0;
        }

        int pow = 1;

        while (pow <= n)
        {
            pow = (pow << 1);
        }
        pow /= 2;

        int res = (n - pow) + 1;
        cout << res << endl;
    }

    return 0;
}
