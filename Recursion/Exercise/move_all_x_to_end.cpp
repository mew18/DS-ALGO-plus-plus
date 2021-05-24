#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str;
    cin >> str;

    string op = "";

    int count = 0;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]=='x')
        {
            ++count;
        }

        else
        {
            cout << str[i];
        }
    }

    for (int i = 0; i < count;++i)
    {
        cout << 'x';
    }

        return 0;
}
