#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if(islower(ch))
    {
        cout << "lowercase" << endl;
    }
    
    else if(isupper(ch))
    {
        cout << "UPPERCASE" << endl;
    }
    
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
