#include <bits/stdc++.h>

using namespace std;

int smax = 0;

void generate_sub_seq(string str,string temp)
{
    if(str.length()==0)
    {
        ++smax;
        cout << temp << " ";
        return;
    }

    char ch = str[0];
    string sub = str.substr(1);
    generate_sub_seq(sub, temp);
    generate_sub_seq(sub, temp + ch);
}

int main()
{
    string str;
    cin >> str;
    generate_sub_seq(str, "");
    cout << endl;
    cout << smax << endl;

    return 0;
}
