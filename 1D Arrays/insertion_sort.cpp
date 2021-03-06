// #include<iostream>
// #include<conio.h>
// #include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n;++i)
    {
        int curr = arr[i];
        int j = i - 1;
        while (j>=0 and arr[j]>curr)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = curr;
    }
}

main()
{
    int n, i;
    cin >> n;

    int a[n];

    for (i = 0; i < n; ++i)
        cin >> a[i];

    insertion_sort(a, n);

    for (i = 0; i < n; ++i)
        cout << a[i] << endl;
}
