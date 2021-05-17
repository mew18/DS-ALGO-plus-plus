#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }

    else
    {
        return a.second < b.second;
    }
}

int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;

    pair<string, int> emp[n];

    int i;
    string temp1;
    int temp2;

    for (i = 0; i < n; ++i)
    {
        cin >> temp1 >> temp2;
        emp[i].first = temp1;
        emp[i].second = temp2;
    }

    sort(emp, emp + n, comp);
    reverse(emp, emp + n);

    for (i = 0; i < n; ++i)
    {
        if (emp[i].second >= x)
        {
            cout << emp[i].first << " ";
            cout << emp[i].second << endl;
        }
    }
    return 0;
}
