#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int main()
{
    int n,k,i,sum=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] <= k)
        {
            sum++;
        }
        else
        {
            for(i=n-1; i>=0; i--)
            {
                if(arr[i] <= k)
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
            break;
        }
    }
    cout<<sum<<endl;

    return 0;
}

