#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 8080;
    int *iptr = &x;
    float y = 3.14159;
    float *fptr = &y;
    cout << *iptr << " " << sizeof(fptr);
    return 0;
}
