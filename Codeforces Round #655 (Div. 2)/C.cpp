#include<bits/stdc++.h>
using namespace std;
int arr[1000000];

int main()
{
    long long int t,i,j,n,m,a,b,sum=0,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m = 100000000;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] < m)
            {
                m = arr[i];
            }
        }

        if(m == arr[n-1])
        {
            cout<<"NO"<<endl;
        }
        else if(m == arr[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {

        }

    }

    return 0;
}

