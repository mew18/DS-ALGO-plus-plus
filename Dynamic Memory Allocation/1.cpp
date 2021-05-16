#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *d_arr = new int[n]{0};

    int *i = new int;
    *i = 0;

    while (*i < n)
    {
        cin >> d_arr[*i];
        ++*i;
    }

    delete i;

    int *j = new int;
    *j = 0;

    while (*j < n)
    {
        cout << d_arr[*j] << " ";
        ++*j;
    }

    delete j;
    delete[] d_arr;

    return 0;
}
