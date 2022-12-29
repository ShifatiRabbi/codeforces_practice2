#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,i=1,n;
    cin>>k>>r;
    for(i=1; i<=10; i++)
    {
        n = k * i;
        if((n-r) % 10 == 0 || n % 10 == 0)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}

