#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,m,a,b,x,y,z,l=0;
        cin>>n>>m>>a>>b;
        z=b;

        if(n*a != m*b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            x=0;
            y=0;
            for(int j=0; j<n; j++)
            {
                a=a+x;
                for(int k=0; k<m; k++)
                {
                    if(a>k && k>=x)
                    {
                        cout<<"1";
                    }
                    else
                    {
                        cout<<"0";
                    }

                }
                b--;

                if(b<=0)
                {
                    x=a;
                    b=z;
                }
                else
                {
                    x=l;
                }
                l=x;
                cout<<endl;
            }

        }

    }

    return 0;
}

