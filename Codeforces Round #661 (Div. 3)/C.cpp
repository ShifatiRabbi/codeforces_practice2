#include<bits/stdc++.h>
using namespace std;
int arr[55],b[55],c[55];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j=0,k=0,l=0,sum1=1,sum2=1;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(i=0; i<n-1; i=i+2)
        {
            b[j] = arr[i] + arr[i+1];

            j++;
        }
        sort(b, b+j);
        for(i=1; i<j; i++)
        {
            if( b[i] == b[i-1])
            {
                sum1++;
            }
        }

        l = n - 1;
        for(i=0; i<n/2; i++)
        {
            c[k] = arr[i] + arr[l];

            k++;
            l--;
        }
        sort(c, c+k);
        for(i=1; i<k; i++)
        {
            if(c[i] == c[i-1])
            {
                sum2++;
            }
        }
        if(n == 1)
        {
            cout<<0<<endl;
        }
        else if(sum1 >= sum2)
        {
            cout<<sum1<<endl;
        }
        else if((sum1 < sum2))
        {
            cout<<sum2<<endl;
        }

    }

    return 0;
}

