#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,sum=0,m=0,c=0;
        cin>>n;
        while(n != 1)
        {
            if(n > 2 && n%2==0)
            {

                for(i=n/2; i<=n/2+2; i=i+2)
                {
                    if(n%i==0)
                    {
                        m=1;
                        n = n / i;

                        break;
                    }
                }
                if(m == 0)
                {
                    n = n - 1;
                }
                else
                {
                    m = 0;
                }
                c++;
            }
            else if(n>2 && n%2!=0)
            {
                n = n / n;
                c++;
            }
            else
            {
                n = n - 1;
                c++;
            }

        }

        if(c%2 == 0)
        {
            cout<<"FastestFinger"<<endl;
        }
        else
        {
           cout<<"Ashishgup"<<endl;
        }

    }

    return 0;
}

