#include <bits/stdc++.h>

using namespace std;

bool isSorted(int a[], int N)
{
    if (N == 1)
    {
        return true;
    }

    if (a[0] <= a[1] && isSorted(a + 1, N - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }

    if(isSorted(a,n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    

    return 0;
}
