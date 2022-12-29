#include<bits/stdc++.h>
using namespace std;
int arr[100000];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,c=0,mx,mn;
        cin>>n>>arr[0];
        mx = arr[0];
        mn = arr[0];
        for(int j=1; j<n; j++)
        {
            cin>>arr[j];

            if(mx < arr[j])
            {
                mx = arr[j];
                c++;
            }
        }

        if(c == n)
        {
            cout<<1<<endl;
        }
        else
        {

        }

    }

    return 0;
}

