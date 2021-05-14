#include <bits/stdc++.h>

using namespace std;

bool binary_search(int a[],  int size,int x)
{
    int s = 0, e = size - 1;
    int m;

    while (e >= s)
    {
        m = (s + e) / 2;

        if (a[m] == x)
            return true;

        else if (x > a[m])
        {
            s = m + 1;
        }

        else if (x < a[m])
        {
            e = m - 1;
        }
    }

    return false;
}

int search_matrix(int a[][1000], int n, int m, int x)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        if (binary_search(a[i],m, x))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n, m, x;
    cin >> n >> m;

    int a[n][1000]; // may be error here

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    cin >> x;

    cout << search_matrix(a, n, m, x);

    return 0;
}
