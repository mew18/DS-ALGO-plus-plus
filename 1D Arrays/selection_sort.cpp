#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int selection_sort(int a[],int n)
{
    for (int i = 0; i < n - 1;++i)
    {
        int min_idx = i;
        for (int j = i; j < n;++j)
        {
            if(a[j]<a[min_idx])
                min_idx = j;
        }
        swap(a[i], a[min_idx]);
    }
}

main()
{
    int n,i;
    cin >> n;

    int a[n];

    for (i = 0; i < n;++i)
        cin >> a[i];

    selection_sort(a, n);

    for (i = 0; i < n; ++i)
        cout << a[i] << endl;
}
