#include<bits/stdc++.h>
using namespace std;
long long int arr[1000000];

int main()
{
    long long int t,i,c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int n,j;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        c = 1;
        for(j=1; j<n; j++)
        {
            if(arr[j] == arr[j-1])
            {
                continue;
            }
            else
            {
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

