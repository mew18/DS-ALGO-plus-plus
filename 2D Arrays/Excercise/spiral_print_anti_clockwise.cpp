#include <bits/stdc++.h>

using namespace std;

void spiral_anti(int a[][10], int m, int n)
{
    int sr = 0, sc = 0, er = m - 1, ec = n - 1, i = 0;

    while (er >= sr)
    {
        if (ec > sc)
        {
            for (i = sr; i <= er; ++i)
            {
                cout << a[i][sc] << ", ";
            }
            ++sc;
        }

        if (er > sr)
        {
            for (i = sc; i <= ec; ++i)
            {
                cout << a[er][i] << ", ";
            }
            --er;
        }

        for (i = er; i >= sr; --i)
        {
            cout << a[i][ec] << ", ";
        }
        --ec;

        for (i = ec; i >= sc; --i)
        {
            cout << a[sr][i] << ", ";
        }
        ++sr;
    }
    cout << "END";
}

int main()
{

    int m, n;
    cin >> m >> n;
    int a[m][10];

    if (!(m >= 1 and m <= 10) and !(n >= 1 and n <= 10))
        domain_error("Out of range");

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    spiral_anti(a, m, n);

    return 0;
}
