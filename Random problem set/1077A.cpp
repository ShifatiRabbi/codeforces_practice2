#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        long long int sum = a - b;
        if(k%2 == 0)
        {
            sum = sum * (k / 2);
        }
        else
        {
            sum = sum * (k / 2) + a;
        }
        cout<<sum<<endl;
    }

    return 0;
}

