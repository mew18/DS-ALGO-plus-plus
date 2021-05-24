#include <bits/stdc++.h>

using namespace std;

void replace_duplicates(char* str, int i)
{
    if (str[i] == '\0' || str[i + 1] == '\0')
    {
        return;
    }

    if (str[i] == str[i + 1])
    {
        for (int j = strlen(str); j > i + 1; j--)
            str[j] = str[j - 1];
        str[i + 1] = '*';
        replace_duplicates(str, i + 2);
    }
    else
        replace_duplicates(str, i + 1);
}

int main()
{
    char str[10000];
    cin >> str;
    replace_duplicates(str, 0);
    cout << str << endl;

    return 0;
}
