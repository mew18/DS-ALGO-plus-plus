#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b)
{
    int n = a.length();
    int m = b.length();
    int len = min(n, m);
    int i = 0;

    while (a[i] == b[i] && i < len)
    {

        i++;
    }
    if (i == len)
    {
        return a.length() > b.length();
    }
    else
        return a.compare(b) < 0 ? true : false;
}

int main()
{
    int n;
    cin >> n;
    string str[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> str[i];
    }

    // sort(str, str+n);
    sort(str, str + n, comp);

    for (auto s : str)
    {
        cout << s << endl;
    }

    return 0;
}
