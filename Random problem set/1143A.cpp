#include<bits/stdc++.h>
using namespace std;
int arr[200000];

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
        {
            x = i + 1;
        }
        else
        {
            y = i + 1;
        }
    }
    if(x > y)
    {
        cout<<y<<endl;
    }
    else
    {
        cout<<x<<endl;
    }

    return 0;
}

