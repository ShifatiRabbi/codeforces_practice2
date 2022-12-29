#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x1=0,y1=0,x2=0,y2=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int k,x,y,j;
        cin>>k>>x>>y;
        if(k == 1)
        {
            x1 = x1 + x;
            y1 = y1 + y;
        }
        else if(k == 2)
        {
            x2 = x2 + x;
            y2 = y2 + y;
        }
    }
    if(x1 >= y1)
    {
        cout<<"LIVE"<<endl;
    }
    else
    {
        cout<<"DEAD"<<endl;
    }
    if(x2 >= y2)
    {
        cout<<"LIVE"<<endl;
    }
    else
    {
        cout<<"DEAD"<<endl;
    }

    return 0;
}

