#include <bits/stdc++.h>

using namespace std;

void all_string(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // one digit
    int digit = in[i] - '0';
    char ch = digit + 'A' - 1;
    out[j] = ch;
    all_string(in, out, i + 1, j + 1);

    //2 digit
    if (in[i + 1] != '\0')
    {
        int second_digit = in[i + 1] - '0';
        int num = digit * 10 + second_digit;
        if (num <= 26)
        {
            ch = num + 'A' - 1;
            out[j] = ch;
            all_string(in, out, i + 2, j + 1);
        }
    }

    return;
}

int main()
{
    char arr[100];
    cin >> arr;

    char out[100];
    all_string(arr, out, 0, 0);
    // cout << arr << endl;
    return 0;
}
