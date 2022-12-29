#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int a,b,sum,x;
        cin>>a>>b;
        if(a>b)
        {
            sum = a - b;
            if(sum%2 == 0)
            {
                x = 1;
            }
            else
            {
                x = 2;
            }
        }
        else if(a<b)
        {
            sum = b - a;
            if(sum%2 == 0)
            {
                x = 2;
            }
            else
            {
                x = 1;
            }
        }
        else
        {
            x = 0;
        }
        cout<<x<<endl;
    }



    return 0;
}

