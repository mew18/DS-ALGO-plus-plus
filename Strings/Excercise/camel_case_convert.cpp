#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length();++i)
    {
        if(isupper(s[i]))
        {
            int j = i+1;
            cout << s[i];
            while(islower(s[j]))
            {
                cout << s[j];
                ++j;
            }
            cout << endl;
        }
    }

        return 0;
}
