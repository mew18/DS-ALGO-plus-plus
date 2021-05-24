#include<bits/stdc++.h>
#define mod  1000000007
using namespace std;

int count_n(int n,int m)
{
    int count[n + 1];
    count[0] = 0;

    for (int i = 1; i <= n;++i)
    {
        if(i>m)
        {
            count[i] = (count[i - 1] + count[i - m])%mod;
        }

        else if(i<m or i==1)
        {
            count[i] = 1;
        }

        else
        {
            count[i] = 2;
        }
    }

    return count[n];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        cout << count_n(n, m) << endl;

    }

    return 0;
}
