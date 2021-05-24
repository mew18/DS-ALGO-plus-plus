#include <bits/stdc++.h>
#define long long int

using namespace std;

void shuffle(int *a, int s, int e)
{
    srand(time(NULL));

    int i, j, temp;

    for (i = e; i > 0; --i)
    {
        j = rand() % (i + 1);
        swap(a[i], a[j]);
    }
}

int partition(int *a, int s, int e)
{
    int i = s - 1;
    int j = s;
    int pivot = a[e];
    for (j = s; j < e; ++j)
    {
        if (a[j] <= pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quick_sort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(a, s, e);
    quick_sort(a, s, p - 1);
    quick_sort(a, p + 1, e);
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
    shuffle(a, 0, n - 1);
    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}
