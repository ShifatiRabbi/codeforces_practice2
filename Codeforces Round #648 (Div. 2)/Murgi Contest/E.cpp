#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,sum=0,i,c=0,j=0,k=0;
        cin>>n>>m;
        long long int arr[n],res=0,pos;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            if(arr[i]>=0)
            {
                sum = sum + arr[i];
                if(sum >= m)
                {
                    c=1;
                    res = sum;
                }

            }
            else
            {
                if( res>=m)
                {
                    pos = i;
                    break;
                }
                j=1;
                sum = 0;
            }
        }
        if(c == 0)
        {
            cout<<"Dari uthe na, meye pote na"<<endl;
        }
        else if(j == 1)
        {
            cout<<"uff handsomeness "<<res<<" on day "<<pos<<endl;
        }
        else
        {
            cout<<"uff handsomeness "<<res<<" on day "<<n<<endl;
        }

    }

    return 0;
}

