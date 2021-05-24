#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        pair<int, int> act[n];
        int n1, n2;

        for (int i = 0; i < n; ++i)
        {
            cin >> n1 >> n2;
            act[i].first = n1;
            act[i].second = n2;
        }

        int count = 1;

        for (int i = 1; i < n; ++i)
        {

            if (act[i].first >= act[i - 1].second)
            {
                ++count;
            }
        }

        cout << count << endl;
    }
    return 0;
}