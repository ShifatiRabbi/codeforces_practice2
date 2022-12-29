#include<bits/stdc++.h>
using namespace std;
int arr[1000000];

int main()
{
    int n,c=0;
    cin>>n;
    cin>>arr[0];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i-1] >= 0)
        {
            arr[i] = arr[i-1] + arr[i];
        }
        else
        {
           c++;
        }
    }
    if(arr[n-1] == -1)
    {
        c++;
    }
    cout<<c<<endl;
    return 0;
}

