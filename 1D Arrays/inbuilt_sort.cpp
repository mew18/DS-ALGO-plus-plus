#include<bits/stdc++.h>

using namespace std;

main()
{
    int arr[4] = {100, 2, 3999, 8};

    sort(arr, arr+4);
    
    for(auto x:arr)
        cout << x << endl;
}
