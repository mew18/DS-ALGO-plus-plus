
#include <bits/stdc++.h>

using namespace std;

void linear_sort(int a[], int n)
{
    int l = 0;
    int h = n - 1;
    int m = n / 2;

    while (m <= h)
    {
        if (a[m] == 0)
        {
            swap(a[m], a[l]);
            ++l;
            ++m;
        }
        else if (a[m] == 1)
        {
            ++m;
        }
        else
        {
            swap(a[h], a[m]);
            --h;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << a[i] << endl;
}

main()
{
    int n, i;
    cin >> n;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    // insertion_sort(a, n);
    linear_sort(a, n);
}
