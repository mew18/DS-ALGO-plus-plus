#include <bits/stdc++.h>

using namespace std;

int last_index(int* a, int n,int key)
{
    int pos = -1;
    for(int i=0;i<n;++i)
    {
        if(a[i]==key)
        {
            pos = i;
        }        
    }
    return pos;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << last_index(a, n, key);

    return 0;
}
