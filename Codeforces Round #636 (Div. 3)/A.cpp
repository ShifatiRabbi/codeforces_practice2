#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {

        long long int n,x=1,k,sum=0;
        cin>>n;
        for(long long int j=1; j<n; j++)
        {
            for(k=1; sum<n; k++)
            {
                sum = sum + x * pow(2,(k-1));

            }
            if(sum == n)
            {
                break;
            }
            else
            {
                k == 1;

                x++;
                sum=0;
            }
        }
        cout<<x<<endl;

    }




    return 0;
}

