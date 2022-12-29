#include<bits/stdc++.h>
using namespace std;
int arr[100];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x=0,c=0,y=0,z=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                x++;
            }
            else
            {
                y++;
            }
            if(i%2==0 && arr[i]%2!=0)
            {
                z++;
            }
            else if(i%2!=0 && arr[i]%2==0)
            {
                z++;
            }
        }
        if(n%2 == 0)
        {
            if(n/2== x && n/2==y)
            {
                c=0;
            }
            else
            {
                c=1;
            }
        }
        else
        {
            if(n/2== x-1 && n/2==y)
            {
                c=0;
            }
            else
            {
                c=1;
            }
        }
        if(c==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<z/2<<endl;
        }

    }

    return 0;
}

