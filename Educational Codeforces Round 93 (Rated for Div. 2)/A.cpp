#include<bits/stdc++.h>
using namespace std;
int arr[200000];


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,c=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);

        if(arr[0]+arr[1]<=arr[n-1])
        {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}
