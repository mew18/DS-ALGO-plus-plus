#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned short int n, m,i,j;
    int a[n], b[m];
    string s1, s2;

    cin >> n;
    for (i = 0; i < n;++i)
    {  
        cin >> a[i];
        s1+=to_string(a[i]);
    }
        

    cin >> m;
    for (i = 0; i < m; ++i)
    {
        cin >> b[i];
        s2 += to_string(b[i]);
    }

    // cout << s1 << " " << s2;

    if (!(n >= 1 and n <= 1000) and !(m >= 1 and m <= 1000))
        domain_error("Error");

    unsigned long long int x1 = stoi(s1);
    unsigned long long int x2 = stoi(s2);

    unsigned long long int x3= x1 + x2;
    vector<unsigned long long int> temp;

    while (x3 > 0)
    {
        int t = x3 % 10;
        temp.push_back(t);
        // cout << t << ", ";
        x3 /= 10;
    }

    reverse(temp.begin(), temp.end());
    for (auto y : temp)
    {
        cout << y << ", ";
    }
    cout << "END";

    return 0;
}
