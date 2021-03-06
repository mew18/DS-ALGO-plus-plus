#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j, k;
    cin >> n;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    // cout << "SUB ARRAYS : " << endl;

    for (i = 0; i < n; ++i)
    {
        for (j = i; j < n; ++j)
        {
            for (k = i; k <= j; ++k)
            {
                cout << a[k] << ",";
            }
            cout << endl;
        }
    }
    
}
