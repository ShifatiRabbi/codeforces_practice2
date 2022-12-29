#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000],c[1000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,d=0,m=0,j=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            c[i] = a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(i>0 && b[i]!=b[i-1])
            {
                d=1;
            }
        }
        sort(a,a+n);
        if(d == 0)
        {
            for(i=0; i<n; i++)
            {
                if(a[i] != c[i])
                {
                    m=1;
                    break;
                }
            }
            if(m == 0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            for(i=1; i<n; i++)
            {
                if((a[i-1] > a[i]) && (b[i] != b[i-1]))
                {
                    m=1;
                    break;
                }
            }
            if(m == 0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }


    }

    return 0;
}

