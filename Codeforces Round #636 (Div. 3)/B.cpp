#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>n;
        int z = n/2;
            if(z%2 != 0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int sum1=0,sum2=0;
                cout<<"YES"<<endl;
                for(int k=2; k<=n; k=k+2)
                {
                    cout<<k<<" ";
                    sum1 = sum1 + k;
                }
                for(int k=1; k<n-2; k=k+2)
                {
                    cout<<k<<" ";
                    sum2 = sum2 + k;
                }
                int sum = sum1 - sum2;
                cout<<sum<<endl;
            }

    }



    return 0;
}

