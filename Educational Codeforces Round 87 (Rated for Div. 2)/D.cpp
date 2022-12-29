#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000],c[1000000];
int x,y,val=0;


int main()
{
    int j=0,c=0;
    cin>>x>>y;
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<y; i++)
    {
        cin>>b[i];

        if(b[i] < 0)
        {
            if(b[i])
            b[i] = b[i] * (-1);
            a[b[i]] = 0;
        }
        else
        {
            for(j=x; j>b[i]; j--)
            {
                a[j] = a[j-1];
            }
            a[b[i]] = b[i];
            x++;
        }
    }
    for(j=0; j<x; j++)
    {
        if(a[j] != 0)
        {
            cout<<a[j]<<endl;
            c=1;
            break;
        }
        c=0;
    }
    if(c==0)
    {
        cout<<0<<endl;
    }

    return 0;
}

