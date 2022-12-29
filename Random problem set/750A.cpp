#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,t=0,sum=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        sum = sum + 5 * i;
        if(sum + k > 240)
        {
            break;
        }
        t++;
    }
    cout<<t<<endl;
    return 0;
}

