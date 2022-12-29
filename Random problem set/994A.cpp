#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],c[10];

int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int k = 0;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    if(k == 0)
    {
        cout<<endl;
    }
    else
    {
        for(i=0; i<k; i++)
        {
            cout<<c[i]<<" ";
        }
    }

    return 0;
}

