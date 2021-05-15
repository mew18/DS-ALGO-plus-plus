#include <bits/stdc++.h>

using namespace std;

string remove_duplicates(string a)
{
    int len = sizeof(a);

    int prev = 0, cur;
    
    if(len==1 or len==0)
    {
        // cout << "NO Need to remove duplicates";
        return a;
    }

    for (cur = 1; cur < len;++cur)
    {
        if(a[prev]!=a[cur])
        {
            ++prev;
            a[prev] = a[cur];
        }
    }

    a[prev+1] = '\0';

    return a;
}

int main()
{
    string a;
    cin >> a;
    cout << remove_duplicates(a) << endl;
    return 0;
}
