
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,x;
        cin>>a>>b;
        if(a % b == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            x = a / b + 1;
            b = b * x;
            cout<<b - a<<endl;
        }

    }

    return 0;
}
