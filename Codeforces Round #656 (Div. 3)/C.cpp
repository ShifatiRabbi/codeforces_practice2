#include<bits/stdc++.h>
using namespace std;
int a[1000005];

int main()
{
    long long int t,i,n,j,c=0,k=0;
    cin>>t;
    while(t--)
    {
        k=0;
        c=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=n-1; i>=0; i--)
        {
            if(a[i-1] >= a[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        for(i=n-1-c; i>=0; i--)
        {
            if(a[i-1] <= a[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c == n)
        {
            c = n - c;
        }
        else
        {
            c = n - c - 1;
        }

        cout<<c<<endl;
    }

    return 0;
}

