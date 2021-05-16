#include <bits/stdc++.h>

using namespace std;

void increment(int *aptr)
{
    *aptr += 1;
    cout << "IN CALLING FUNCTION" << *aptr << endl;
}

int main()
{
    int a = 18;
    cout << "IN MAIN FUNCTION" << a << endl;
    increment(&a);
    cout << "AFTER FUNCTION CALL AND IN MAIN FUNCTION: " << a << endl;

    return 0;
}
