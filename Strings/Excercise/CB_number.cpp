#include <bits/stdc++.h>

using namespace std;

int cbcheck(long long sub, int start, int end)
{
    if (sub == 0 or sub == 1)
    {
        return false;
    }

    int x[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    for (int i = 0; i < sizeof(x) / sizeof(int); ++i)
    {
        if (sub == x[i])
        {
            return true;
        }
    }

    for (int i = 0; i < sizeof(x) / sizeof(int); ++i)
    {
        if (sub % x[i] == 0)
        {
            return false;
        }
    }

    return true;
}

bool isvalid(bool visited[],int start,int end)
{
    for (int i = start; i < end;++i)
    {
        if(visited[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    // cin.get();
    string s;
    cin >> s;
    bool visited[100] = {false};
    int count = 0;
    for (int len = 1; len <= s.length(); ++len)
    {
        for (int pos = 0; pos <= s.length() - len; ++pos)
        {
            int end = pos + len;
            string sub = s.substr(pos, len);
            if (cbcheck(stoll(sub), pos, end) and isvalid(visited,pos,end))
            {
                ++count;
                for (int k = pos; k < end; ++k)
                {
                    visited[k] = true;
                }
            }
        }
    }

    cout << count;

    return 0;
}
