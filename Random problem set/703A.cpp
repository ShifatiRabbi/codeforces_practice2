#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0,c=0;
    cin>>n;
    int x,y;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            m++;
        }
        else if(y>x)
        {
            c++;
        }
    }

    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(c>m)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}


