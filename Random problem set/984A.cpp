#include<bits/stdc++.h>
using namespace std;
int arr[1000009];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    n = n - 1;
    cout<<arr[n/2]<<endl;
    return 0;
}

