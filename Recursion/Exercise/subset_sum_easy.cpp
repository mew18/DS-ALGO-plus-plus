#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int flag;

void subset_sum(int *a, int n, int i,ll sum)
{
    // int sum = 0;
    if(i==n)
    {
        if(sum==0)
        {
            ++flag;
        }
        return;
    }

    subset_sum(a, n, i + 1, sum + a[i]);
    subset_sum(a, n, i + 1, sum);

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i=0;i<n;++i)
        {
            cin >> a[i];
        }

        flag = 0;

        subset_sum(a, n, 0,0);

        if(flag>1)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
