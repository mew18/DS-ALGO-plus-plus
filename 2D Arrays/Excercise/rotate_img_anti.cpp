#include<bits/stdc++.h>

using namespace std;

void rotate_img(int a[][1000],int n)
{
    for (int i = 0; i < n; ++i)
    {
        reverse(a[i], a[i] + n);
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[j][i]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n][1000]; // may be error here

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    rotate_img(a, n);

    return 0;
}
