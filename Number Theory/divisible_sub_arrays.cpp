#include <bits/stdc++.h>
#define ll long long int
#define max 1000005
using namespace std;

ll a[max],pre[max];

int main()
{
    unsigned short int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(pre, 0, sizeof(pre));
        pre[0] = 1;
        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            ll temp;
            cin >> temp;
            sum += temp;
            sum %= n;
            sum = (sum + n) % n;
            ++pre[sum];
        }

        ll ans = 0;
        for(int i=0;i<n;++i)
        {
            ans += ((pre[i]) * (pre[i] - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
