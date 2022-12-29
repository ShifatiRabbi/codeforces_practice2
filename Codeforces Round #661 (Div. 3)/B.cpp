#include<bits/stdc++.h>
using namespace std;
int a[55],b[55];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x=10000000000,y=100000000000,i=0,j=0,r=0,t=0,sum=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if( x >a[i])
            {
                x = a[i];
            }
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(y > b[i])
            {
                y = b[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(x <= y)
            {
                if(a[i] <= b[i])
                {
                    r = a[i] - x;
                    t = b[i] - y - r;
                    if(t < 0)
                    {
                        t = 0;
                    }
                    if(r < 0)
                    {
                        r = 0;
                    }
                    sum = sum + r + t;
                }
                else
                {
                    r = b[i] - y;
                    t = a[i] - x - r;
                    if(t < 0)
                    {
                        t = 0;
                    }
                    if(r < 0)
                    {
                        r = 0;
                    }
                    sum = sum + r + t;
                }
            }
            else
            {
                if(a[i] <= b[i])
                {
                    r = a[i] - x;
                    t = b[i] - y - r;
                    if(t < 0)
                    {
                        t = 0;
                    }
                    if(r < 0)
                    {
                        r = 0;
                    }
                    sum = sum + r + t;
                }
                else
                {
                    r = b[i] - y;
                    t = a[i] - x - r;
                    if(t < 0)
                    {
                        t = 0;
                    }
                    if(r < 0)
                    {
                        r = 0;
                    }
                    sum = sum + r + t;
                }
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}

