#include <bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n, char src, char temp, char dest)
{
    if (n == 0)
    {
        return;
    }

    tower_of_hanoi(n - 1, src, dest, temp);
    cout << "Moving ring " << n << " from " << src << " to " << dest << endl;
    tower_of_hanoi(n - 1, temp, src, dest);
}

int main()
{
    int n;
    cin >> n;
    tower_of_hanoi(n, 'A', 'C', 'B');

    return 0;
}
