#include <bits/stdc++.h>

using namespace std;

void exorish(string n1,string n2)
{
    int len = n1.length();
    int i;
    for (i = 0; i < len;++i)
    {
        if(n1[i]!=n2[i])
        {
            cout <<"1";
        }

        else
        {
            // s3[i] += '0';
            cout <<"0";
        }

    }
    cout << endl;

    // return "Teary Cat";
}

int main()
{
    int t;
    cin >> t;
    

    while(t--)
    {
        string n1, n2;
        cin >> n1 >> n2;
        // cout << to_string(n1) << " " << to_string(n2)<<endl;

        exorish(n1,n2);
        // int n3 = n1 ^ n2;
    }

    return 0;
}
