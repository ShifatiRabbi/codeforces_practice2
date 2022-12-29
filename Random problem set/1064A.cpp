#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum=0,temp;
    cin>>a>>b>>c;
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    sum = c - (a + b) + 1;
    if((a+b>c) && (b+c>a) && (c+a>b))
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }

    return 0;
}

