#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (!(n >= 1 and n <= 1000))
    {
        throw domain_error("Value out of range");
    }

    else
    {
        int a[n], i;
        for (i = 0; i < n; ++i)
            cin >> a[i];

        sort(a, a + n);

        int k;
        cin >> k;

        for (i = 0; i < n; ++i)
        {
            int s = i + 1;
            int e = n - 1;

            while (e > s)
            {
                if (a[e] + a[s] + a[i] > k)
                    --e;

                else if (a[e] + a[s] + a[i] < k)
                    ++s;

                else if (a[e] + a[s] + a[i] == k)
                {
                    cout << a[i] << ", " << a[s] << " and " << a[e] << endl;
                    ++s;
                    --e;
                }
            }
        }
    }

    return 0;
}
