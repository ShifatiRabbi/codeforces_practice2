#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int a,b,c,d,k,x,y;
        cin>>a>>b>>c>>d>>k;
        if(b % d == 0)
        {
            x = b / d;
        }
        else
        {
            x = b / d + 1;
        }
        y = k - x;
        if((y * c) < a)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<y<<" "<<x<<endl;
        }

    }


    return 0;
}

