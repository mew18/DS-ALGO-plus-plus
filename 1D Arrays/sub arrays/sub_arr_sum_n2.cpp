#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j, k, curr_sum = 0, max_sum = 0,start,end;
    cin >> n;

    int a[n], arr_sum[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    arr_sum[0] = a[0];
    
    for (i = 1; i < n; ++i)
        arr_sum[i] = arr_sum[i - 1] + a[i];

    // cout << "SUB ARRAYS : " << endl;

    for (i = 0; i < n; ++i)
    {
        for (j = i; j < n; ++j)
        {
            curr_sum = 0;
            curr_sum = arr_sum[j] - arr_sum[i-1];

            if(curr_sum>max_sum)
            {
                max_sum = curr_sum;
                start = i;
                end = j;
            }
        }
    }

    cout << "MAXIMUM SUM : " << max_sum << endl;
    cout << "SUB ARRAY: ";
    for (k = start; k <= end; ++k)
    {
        cout << a[k] << ",";
    }
}
