#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,x=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        x++;
        if(x == 4)
        {
            cout<<"#";
        }
        else if(i%2 == 0)
        {
            cout<<".";
        }
        else
        {
            cout<<"#";
        }
        for(j=2; j<m; j++)
        {
            if(i%2 == 0)
                cout<<".";
            else
                cout<<"#";
        }
        if(x == 4)
        {
            cout<<".";
        x = 0;
        }
        else
        {
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}

