#include<bits/stdc++.h>
using namespace std;
int a[100005],b[10004];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,i,j=0,c=0,d=0;
        cin>>n>>x;
        int sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int k=0; k<n; k++)
        {
            j = 0;
            for(i=k; i<n; i++)
            {
                if(i == n-1)
                {
                    d = 1;
                }
                sum = sum + a[i];

                if(sum % x == 0)
                {
                    sum = 0;
                   if(c < j)
                   {
                       c = j;
                   }
                   break;
                }
                else
                    j++;cout<<" "<<sum<<endl;
            }
            if(d == 1)
            {
                break;
            }
            if(j == n)
            {
                break;
            }
        }

        if(j>c)
        {
            cout<<j<<endl;
        }
        else if(j==0 && c==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<c<<endl;
        }

    }

    return 0;
}
