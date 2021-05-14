#include <bits/stdc++.h>

using namespace std;

void spiral_print(int a[][10], int m, int n)
{
    int sr = 0, sc = 0, er = m - 1, ec = n - 1, i = 0;

    while (sr <= er)
    {
        for (i = sc; i <= ec; ++i)
            cout << a[sr][i] << " ";
        ++sr;

        for (i = sr; i <= er; ++i)
            cout << a[i][ec] << " ";
        --ec;

        if (er > sr)
        {
            for (i = ec; i >= sc; --i)
                cout << a[er][i] << " ";
            --er;
        }

        if (ec > sc)
        {
            for (i = er; i >= sr; --i)
                cout << a[i][sc] << " ";
            ++sc;
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][10];

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    spiral_print(a, m, n);

    return 0;
}
