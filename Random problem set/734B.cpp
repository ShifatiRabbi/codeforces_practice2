#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    if(a == 0)
    {
        sum = 0;
    }
    else if(a<=c && a<=d)
    {
        sum = a * 256;
    }
    else if(a<=c && a>=d)
    {
        if(a-d>=b)
        {
            sum = d * 256 + b * 32;
        }
        else
        {
            sum = d * 256 + (a-d) * 32;
        }
    }
    else if(a>=c && a<=d)
    {
        if(a-c>=b)
        {
            sum = c * 256 + b * 32;
        }
        else
        {
            sum = c * 256 + (a-c) * 32;
        }
    }
    else if(a>=c && a>=d)
    {
        if(c>=d)
        {
            swap(c,d);
        }
        if(a-c>=b)
        {
            sum = c * 256 + b * 32;
        }
        else
        {
            sum = c * 256 + (a-c) * 32;
        }
    }


    cout<<sum<<endl;
    return 0;
}

