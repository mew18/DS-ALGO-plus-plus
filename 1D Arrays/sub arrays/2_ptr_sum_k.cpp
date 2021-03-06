#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j,sum;
    cin >> n >> sum;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    i = 0;
    j = n - 1;
    
    while(j>i )
    {
        if(a[i]+a[j]>sum)
            --j;
            
        else if (a[i] + a[j] < sum)
            ++i;

        else if (a[i] + a[j] == sum)
        {
            cout << a[i] << " and " << a[j]<<endl;
            ++i;
            --j;
        }
        
        
    }
}
