#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, s;
    cin >> n >> m >> k >> s;

    char a[n][m];

    int i, j;

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            if (s < k)
            {
                break;
            }
            
            if (a[i][j] == '.')
            {
                s -= 2;
            }

            else if (a[i][j] == '*')
            {
                s += 5;
            }

            // if (a[i][j] == '#')
            else
            {
                break;
            }

            if (j != n - 1)
            {
                --s;
            }
        }
    }


    if (s >= k)
    {
        cout << "Yes" << endl;
        cout << s << endl;
    }

    else
    {
        cout << "No";
    }

    return 0;
}



