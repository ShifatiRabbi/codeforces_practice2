#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    long long int x = pow(2,13) - 100;
    if(n<13)
    {
        cout<<pow(2,n)<<endl;
    }
    else if(n==13)
    {
        cout<<x<<endl;
    }
    else
    {
        for(int i=14; i<=n; i++)
        {
            x = x * 2;
        }
        cout<<x<<endl;
    }

    return 0;
}

