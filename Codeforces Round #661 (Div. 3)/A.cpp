#include<bits/stdc++.h>
using namespace std;
int arr[100];

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,a,b,j,c=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);

        for(i=1; i<n; i++)
        {

            if((arr[i]-arr[i-1])>1 || (arr[i]-arr[i-1])<-1)
            {
                cout<<"NO"<<endl;
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
