#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i, curr_sum = 0, max_sum = 0;
    cin >> n;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];


    for (i = 0; i < n; ++i)
    {
        curr_sum += a[i];
        if(curr_sum<0)
            curr_sum = 0;
        else
            max_sum = max(curr_sum, max_sum);
    }

    cout << "MAXIMUM SUM: " << max_sum;
}
