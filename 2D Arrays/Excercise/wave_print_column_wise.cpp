#include <bits/stdc++.h>
#include <stdexcept>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    if (!(   (m >= 1 and m <= 10) and (n >= 1 and n <= 10)  ))
    {
        throw domain_error("Out of the given domain");
    }
    
    else
    
    {

        int a[m][n];

        int i, j;

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }

        for (j = 0; j < n; ++j)
        {
            for (i = 0; i < m; ++i)
            {
                if (j % 2 != 0)
                {
                    cout << a[m - 1 - i][j] << ", ";
                }

                else
                {
                    cout << a[i][j] << ", ";
                }

                if (i == m - 1 and j == n - 1)
                    cout << "END";
            }
        }
    }

    return 0;
}
