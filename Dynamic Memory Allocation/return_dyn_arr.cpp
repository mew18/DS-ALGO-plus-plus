#include <bits/stdc++.h>
using namespace std;

int *func()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int *arr = new int[5];
    arr[0] = 69;
    // static and local scope, arr deleted after method called, no longer in mem , if we try to access it, we get junk
    cout << arr << endl;

    return arr;
}


int main()
{
    int *adr = func();
    cout << adr << endl;
    cout << adr[0];
    delete[] adr;


    return 0;
}
