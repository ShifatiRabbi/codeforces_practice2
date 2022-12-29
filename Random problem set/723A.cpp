#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum;
    cin>>a>>b>>c;
    if(a>b)
    {
        swap(a,b);
    }
    if(b>c)
    {
        swap(b,c);
    }
    if(a>b)
    {
        swap(a,b);
    }
    sum = c - a;
    cout<<sum<<endl;
    return 0;
}

