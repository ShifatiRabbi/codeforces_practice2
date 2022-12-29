#include<bits/stdc++.h>
using namespace std;
int arr[100000];

int main()
{
    int n,m,k=0;
    cin>>n>>m;


    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        for(int j=k; j<x+k; j++)
        {
            cin>>arr[j];
        }
        k = k + x;
    }

    sort(arr, arr+k);

    for(int i=k-1; i>=0; i--)
    {
        if(arr[i] == m)
        {
            m--;
            if(m==0)
            {
                break;
            }
        }
    }

    if(m == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

