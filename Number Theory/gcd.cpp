#include<bits/stdc++.h>

using namespace std;

int gcd(int n1,int n2)
{
    return n2==0 ? n1 : gcd(n2, n1 % n2);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2);
    // cout << __gcd(n1, n2);


    return 0;
}
