#include <bits/stdc++.h>

using namespace std;
static int res = 0;

int mul(int a, int b)
{
    res += a;
    --b;

    if(b==0)
    {
        return res;
    }
    else
    {
        return mul(a, b);
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << mul(a, b);

    return 0;
}
