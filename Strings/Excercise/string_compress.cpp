#include <bits/stdc++.h>

using namespace std;

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {

        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Print character and its count
        cout << str[i] << count;
    }
}

int main()
{
    string s;
    cin >> s;

    if (!(s.length() >= 1 and s.length() <= 1000))
    {
        domain_error("Error");
    }
    printRLE(s);
    return 0;
}