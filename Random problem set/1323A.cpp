#include<bits/stdc++.h>
using namespace std;
int arr[1000];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,j;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        if(n == 1)
        {
            if(arr[0] % 2 == 0)
            {
                cout<<1<<endl<<1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            if(arr[0] % 2 == 0)
            {
                cout<<1<<endl<<1<<endl;
            }
            else if(arr[1] % 2 == 0)
            {
                cout<<1<<endl<<2<<endl;
            }
            else if(arr[0] % 2 != 0 && arr[1] % 2 != 0)
            {
                cout<<2<<endl<<1<<" "<<2<<endl;
            }
        }
    }

    return 0;
}

