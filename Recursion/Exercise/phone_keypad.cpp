#include <bits/stdc++.h>

using namespace std;

char table[][10] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate_string(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] == '\0';
        cout << out << endl;
        return;
    }

    int digit = in[i] - '0';
    // if (digit == 0)
    // {
    //     generate_string(in, out, i + 1, j);
    // }
    for (int k = 0; table[digit][k] != '\0'; ++k)
    {
        out[j] = table[digit][k];
        generate_string(in, out, i + 1, j + 1);
    }
}

int main()
{
    char a[12];
    cin >> a;

    char out[100];
    generate_string(a, out, 0, 0);

    return 0;
}
