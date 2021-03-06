#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main()
{
    int n;
    cin >> n;

    int a[n];

    int i;
    for (i = 0; i < n;++i)
    {
        cin >> a[i];
    }

    int key;

    cout << "Enter Key";
    cin >> key;

    for (i = 0; i < n; ++i)
    {
        if(key==a[i])
            cout << key << " found at : " << i << endl;
    }
    
    if(i==n)
        cout << "Element not found";
}
