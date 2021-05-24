#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int exor = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        exor = exor ^ a[i];
    }

    int temp = exor;
    int pos = 0;

    while ((temp & 1) == 0)
    {
        ++pos;
        temp = temp >> 1;
    }

    int mask = (1 << pos);

    int n1=0, n2=0;

    for (int i = 0; i < n; ++i)
    {
        if ((a[i] & mask) > 0)
        {
            n2 = n2 ^ a[i];
        }
    }

    n1 = exor ^ n2;

    cout << min(n1,n2) << " " << max(n1,n2) << endl;

    return 0;
}
