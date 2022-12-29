#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x,j,c=0;
        cin>>n;

        if(n == 1)
        {
            cout<<0<<endl;
        }
        else
        {
            while( n != 1)
            {
                if(n%5 == 0)
                {
                    cout<<-1<<endl;
                    c=0;
                    break;
                }
                else if(n%4 == 0 && n%3!=0 && n%6!=0)
                {
                    cout<<-1<<endl;
                    c=0;
                    break;
                }
                else if(n == 2)
                {
                    cout<<-1<<endl;
                    c=0;
                    break;
                }
                else
                {
                    if(n % 6 == 0)
                    {
                        n = n / 6;
                        c++;
                    }
                    else
                    {
                        n = n * 2;
                        c++;
                    }
                }
            }

        }
        if(c > 0)
        {
            cout<<c<<endl;
        }

    }

    return 0;
}

