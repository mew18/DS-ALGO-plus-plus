#include<bits/stdc++.h>

using namespace std;

string table[] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string searchIn[] = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"};


void get_num(char *in, char *out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
        for (int k = 0; k < 11;++k)
        {
            size_t found = searchIn[k].find(out);
            if(found!=string::npos)
            {
                cout << searchIn[k] << endl;
            }
        }

        return;
    }

    int key = in[i] - '0';
    if(key==0)
    {
        get_num(in, out, i + 1, j);
    }

    for (int m = 0; table[key][m] != '\0';++m)
    {
        out[j] = table[key][m];
        get_num(in, out, i + 1, j + 1);
    }

    return;
}

int main()
{
    char in[1000], out[1000];
    cin>>in;
    get_num(in, out, 0, 0);

    return 0;
}
