#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,count = 0;
    cin>>n;

    for(i=1; i<=n/2; i++)
    {
        int x = n;
        x = x - i;
        if(x%i == 0)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}


