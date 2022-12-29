#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000],d[1000000];

int main()
{
    long long int n,m,x,y,i,c=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        b[x-1] = b[x-1] - 1;
        b[y-1] = b[y-1] - 1;

    }
    for(i=0; i<n; i++)
    {
        if(b[i] > 0)
        {
            cout<<"DEAD"<<endl;
            c = 1;
            break;
        }
        else
        {

        }
    }
    if(c == 0)
    {
        cout<<"ALIVE"<<endl;

    }

    return 0;
}

