#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int binary_search(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    
    while(s<=e)
    {
        int m = (s + e) / 2;

        if (k == a[m])
            return m;

        else if (a[m] > k)
        {
            e = m - 1;
        }

        else
        {
            s = m + 1;
        }
    }

    return -1;
}

main()
{
    int n;
    cin >> n;

    int a[n];

    int i;
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int key;

    cout << "Enter Key";
    cin >> key;

    cout << binary_search(a, n, key) << endl;
}
