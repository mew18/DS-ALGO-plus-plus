#include <bits/stdc++.h>

using namespace std;

char max_frequency(string s)
{
    int len = s.length();
    int count[256] = {};
    int i;
    
    for (i = 0; i < len; ++i)
    {
        ++count[s[i]];
    }

    int max=INT_MIN, pos;
    for (i = 0; i < 256;++i)
    {
        if(count[i]>max)
        {
            max = count[i];
            pos = i;
        }
    }

    return (char)pos;
}

int main()
{
    string s;
    cin >> s;

    cout << max_frequency(s);

    return 0;
}
