#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b)
{
    if(a+b>b+a)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    if (!(t >= 1 and t <= 100))
        domain_error("Out of range");

    while (t--)
    {
        int n;
        cin >> n;

        if (!(n >= 1 and n <= 100))
            domain_error("Out of range");

        int i, a[n];
        vector<string> str(n);

        for (i = 0; i < n; ++i)
        {
            // cin >> a[i];
            cin >> str[i];
            // if (!(a[i] >= 1 and a[i] <= 100000))
            //     domain_error("Out of range");
        }


        
        sort(str.begin(), str.end(), comp);

        for (i = 0; i < n; ++i)
        {
            cout << str[i];
        }

        cout << endl;
    }

    return 0;
}
