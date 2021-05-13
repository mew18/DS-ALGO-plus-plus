#include<bits/stdc++.h>

using namespace std;

int bitonic(int arr[],int n)
{
    int asc[n], dsc[n], i, max;
    asc[0] = 1;
    dsc[n - 1] = 1;

    for (i = 1; i < n; ++i)
    {
        if(arr[i]>=arr[i-1])
            asc[i] = asc[i - 1] + 1;
        else
            asc[i] = 1;
    }

    for (i =n-2; i >= 0; --i)
    {
        if (arr[i] >= arr[i + 1])
            dsc[i] = dsc[i + 1] + 1;
        else
            dsc[i] = 1;
    }

    max = asc[0] + dsc[0] - 1;
    for (i = 1; i < n; i++)
    {
        if(asc[i]+dsc[i]-1>max)
            max = asc[i] + dsc[i] - 1;
    }

    return max;
}

int main()
{
    int t;
    cin >> t;
    if(!(t>=1 and t<=100))
        domain_error("Out of range");
        
    while(t--)
    {
        int n;
        cin >> n;

        if (!(n >= 1 and n <= 1000000))
            domain_error("Out of range");

        int i, arr[n],j,k,curr_len=0,max_len=0;

        for (i = 0; i < n;++i)
            cin >> arr[i];

        cout << bitonic(arr, n) << endl;
    }

    return 0;
}
