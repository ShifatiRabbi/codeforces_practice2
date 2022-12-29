#include<bits/stdc++.h>
using namespace std;
int arr[200005];

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x=0,k,j=0;
        string s;
        cin>>n>>k;
        cin>>s;

        for(i=0; i<n; i++)
        {
            if(s[i] == '1')
            {
                arr[j] = i;
                j++;
            }
        }
        if(j==0)
        {
            if(n==k)
            {
                cout<<1<<endl;
            }
            else if(n%(k+1) == 0)
            {
                cout<<n/(k+1)<<endl;
            }
            else if(n%(k+1) != 0)
            {
                cout<<n/(k+1) + 1<<endl;
            }
        }
        else
        {
            if(arr[0] - 0 >=(k+1) )
            {
                x = x + (arr[0] - 0)/(k+1);

            }

            for(i=1; i<j; i++)
            {
               if(arr[i] - arr[i-1] >=(k+1)*2 )
                {
                    x = x + (arr[i] - arr[i-1] )/(k+1) - 1;
                }
            }
            if(n-1 - arr[j-1] >=(k+1) )
                {
                    x = x + (n-1 - arr[i-1] )/(k+1);
                }
            cout<<x<<endl;
        }

    }

    return 0;
}

