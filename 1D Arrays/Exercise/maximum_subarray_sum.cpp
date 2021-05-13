#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    if(!(t>=1 and t<=20))
    {
        domain_error("Value of t out of range");
    }
    
    while(t--)
    {
        int n;
        cin >> n;

        if (!(n >= 1 and n <= 100000))
        {
            domain_error("Value of n out of range");
        }
        
        else
        {
            int a[n];

            int i;

            for (i = 0; i < n;++i)
            {
                cin >> a[i];
                
                if (!(a[i] >= -100000000 and a[i] <= 100000000))
                {
                    domain_error("Value of a[i] out of range");
                }
            }

            int curr = 0, sum = 0;


            for (i = 0; i < n; ++i)
            {
                curr += a[i];
                if(curr<0)
                {
                    curr = 0;
                }
                else
                {
                    sum = max(curr, sum);
                }
            }

            cout << sum << endl;
        }
    }

    return 0;
}
