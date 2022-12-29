#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,odd=0,even=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
            if(arr[j]%2==1)
                odd++;
            else
                even++;
        }
        if(odd%2 == 1)
            cout<<"YES"<<endl;
        else if(odd>0 && odd%2==0 )
        {
            if(even>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        if(odd==0)
            cout<<"NO"<<endl;
    }
return 0;
}




