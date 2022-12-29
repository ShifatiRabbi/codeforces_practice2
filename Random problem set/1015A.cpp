#include<bits/stdc++.h>
using namespace std;
int ax[1000];

int main()
{
    int n,x,j=0,c=0;
    int arr[1000];
    cin>>n>>x;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            ax[i] = 1;
        }
    }
    for(int i=1; i<=x; i++)
    {
        if(ax[i] != 1)
        {
            c++;
            arr[j] = i;
            j++;
        }
    }
    cout<<c<<endl;
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

