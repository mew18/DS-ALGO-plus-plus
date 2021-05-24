#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count[64] = {0};
    memset(count, 64, 0);
    int n;
    cin >> n;
    int temp;

    for(int i=0;i<n;++i)
    {
        cin >> temp;
        int j = 0;
        while(temp>0)
        {
            int last_bit = (temp & 1);
            count[j] += last_bit;
            ++j;
            temp = temp >> 1;


        }
    }

    int p = 1;
    int ans=0;
    for(int i=0;i<64;++i)
    {
        count[i] %= 3;
        ans += (count[i] * p);
        p = p << 1;
    }
    cout << ans << endl;
    


    return 0;
}
