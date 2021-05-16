#include<bits/stdc++.h>

using namespace std;

void ascii_diff(string s)
{
    for (int i = 0; i < s.length();++i)
    {
        if(i==s.length()-1)
        {
            cout << s[i];
            break;
        }
        cout << s[i] << (int)s[i + 1] - s[i];
    }
}

int main()
{
    string s;
    cin >> s;
    if(!(s.length()>=2 and s.length()<=1000))
    {
        domain_error("Error");
    }

    ascii_diff(s);

    return 0;
}
