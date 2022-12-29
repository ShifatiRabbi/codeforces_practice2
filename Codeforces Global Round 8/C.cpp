#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,j,c=0,sum=0,n,x,y,k=0;
    cin>>t;
    if(t==1)
    {
        cout<<7<<endl;
        cout<<0<<" "<<0<<endl;
        cout<<0<<" "<<1<<endl;
        cout<<1<<" "<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<1<<endl;
        cout<<2<<" "<<2<<endl;

    }
    else if(t==2)
    {
        cout<<10<<endl;
        cout<<0<<" "<<0<<endl;
        cout<<0<<" "<<1<<endl;
        cout<<1<<" "<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<1<<endl;
        cout<<2<<" "<<2<<endl;
        cout<<2<<" "<<3<<endl;
        cout<<3<<" "<<2<<endl;
        cout<<3<<" "<<3<<endl;

    }
    else
    {
        for(i=2; i<=t; i=i+2)
        {
            sum = sum + i;
        }
        sum = sum * 2;
        if(t%2 != 0)
        {
            sum = sum + t;
        }
        cout<<sum<<endl;


        for(i=0; i<t/2; i++)
        {
            n = (i + 1) * 2;
            x = (t - n) / 2;
            for(j=0; j<x+n; j++)
            {
                if(j>=x)
                {
                    cout<<j<<" "<<i<<endl;
                }
            }
        }
        if(t%2 != 0)
        {
            k = 1;
            i = t / 2;
                for(j=0; j<t; j++)
                {
                        cout<<j<<" "<<i<<endl;
                }

        }

        for(i=t/2+k; i<t; i++)
        {
            n = (t - i) * 2;
            x = (t - n+1) / 2;
            y = x;
            if(y+n > t)
            {
                c = t;
            }
            else
            {
                c = y + n;
            }
            for(j=0; j<c; j++)
            {
                if(j>=x)
                {
                    cout<<j<<" "<<i<<endl;
                }
            }
        }
    }



    return 0;
}

