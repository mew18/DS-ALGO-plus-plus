#include <bits/stdc++.h>

using namespace std;

int string_to_int(string str,int len)
{
    if(len==0)
    {
        return 0;
    }

    int digit = str[len - 1] - '0';
    int num = string_to_int(str, len - 1);

    return num * 10 + digit;


}

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    cout << string_to_int(str,len) << endl;


    return 0;
}
