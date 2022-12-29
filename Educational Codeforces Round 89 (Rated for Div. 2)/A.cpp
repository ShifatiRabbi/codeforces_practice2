#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,m,i;
        cin>>a>>b;
        if(a==0 || b==0)
        {
            cout<<0<<endl;
        }
        else if(a==1 && b==1)
        {
            cout<<0<<endl;
        }
        else
        {
            n = a+b;
            m = n/3;

            if(m>a && m<=b)
            {
                cout<<a<<endl;
            }
            else if(m<=a && m>b)
            {
                cout<<b<<endl;
            }
            else
            {
                cout<<m<<endl;
            }
        }

    }

    return 0;
}
