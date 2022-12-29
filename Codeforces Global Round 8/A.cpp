#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i=1,sum=0,n,a,b,c;
        cin>>a>>b>>n;
        sum = a + b;
        while(sum <= n)
        {
           if(a>b)
           {
               b = a + b;
           }
           else
           {
               a = a + b;
           }
            sum = a + b;
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}
