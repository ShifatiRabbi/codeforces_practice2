#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0, x=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sum = a + b + c;
        if(sum > 1)
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}

