#include <bits/stdc++.h>

using namespace std;

int k_count = 0;
char table[][10] = {"", "abc", "def", "ghi", "kjl", "mno", "pqrs", "tuv", "wx", "yz"};

void gen_keypad_code(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << " ";
        ++k_count;
        return;
    }

    int key = in[i] - '0';
    if(key==0)
    {
        gen_keypad_code(in, out, i + 1, j);
    }

    for (int k = 0; table[key][k] != '\0';++k)
    {
        out[j] = table[key][k];
        gen_keypad_code(in, out, i + 1, j + 1);
    }

    return;
}

int main()
{
    char ip[100], op[100];
    cin>>ip;
    gen_keypad_code(ip, op, 0, 0);
    cout << endl;
    cout << k_count << endl;

    return 0;
}
