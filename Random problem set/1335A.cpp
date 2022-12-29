#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int n;
        cin>>n;
        if(n%2 == 0)
        {
            n--;
        }
        cout<<n/2<<endl;
    }

    return 0;
}

