#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    
    int a[n];
    int maximum = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        maximum = max(maximum, a[i]);
    }


    cout << maximum;

    return 0;
}
