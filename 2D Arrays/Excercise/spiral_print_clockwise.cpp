#include <bits/stdc++.h>

using namespace std;


int main()
{

    int m,n;
    cin >>m>> n;

    if (!(m >= 1 and m <= 10) and !(n >= 1 and n <= 10))
        domain_error("Out of range");

    int i,j,a[m][n];

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    
    


    return 0;
}
