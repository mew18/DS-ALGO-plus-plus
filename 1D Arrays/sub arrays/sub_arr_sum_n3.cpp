#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i, j, k, start, end,curr_sum=0,max_sum=0;
    cin >> n;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    // cout << "SUB ARRAYS : " << endl;

    for (i = 0; i < n; ++i)
    {
        for (j = i; j < n; ++j)
        {
            curr_sum = 0;
            for (k = i; k <= j;++k)
            {
                curr_sum += a[k];
                if (curr_sum > max_sum)
                {
                    max_sum = curr_sum;
                    start = i;
                    end = j;
                }
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
