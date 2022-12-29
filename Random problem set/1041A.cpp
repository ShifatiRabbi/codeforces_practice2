#include<bits/stdc++.h>
using namespace std;
long long int arr[1000];

int main()
{
    int n,i,sum;
    cin>>n;
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    sum = arr[n-1] - arr[0] + 1;
    cout<<abs(n-sum)<<endl;
    return 0;
}

