#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;

    for(int i=0;i<n;++i)
    {
        int temp;
        cin >> temp;
        res = res ^ temp;
    }

    cout << res << endl;

    return 0;
}
