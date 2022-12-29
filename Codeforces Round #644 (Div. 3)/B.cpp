#include<bits/stdc++.h>
using namespace std;
int arr[1000];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n, sm=0, lr=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        if(n == 2)
        {
            cout<<arr[1]-arr[0]<<endl;
        }
        else
        {

        lr = arr[n/2+1];
        sm = arr[n/2];

        cout<<abs(sm - lr)<<endl;
        }
    }

    return 0;
}

