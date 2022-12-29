#include<bits/stdc++.h>
using namespace std;
int arr[1007];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,m,sum=0;
        cin>>n>>m;
        for(int j=0; j<n; j++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if(sum<=m)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<m<<endl;
        }

    }


    return 0;
}

