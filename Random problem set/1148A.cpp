#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,sum;
    cin>>a>>b>>c;
    sum = c * 2 ;
    if(a > b)
    {
        sum = sum + b * 2 + 1;
    }
    else if(b > a)
    {
        sum = sum + a * 2 + 1;
    }
    else
    {
        sum = sum + a * 2 ;
    }
    cout<<sum<<endl;
    return 0;
}

