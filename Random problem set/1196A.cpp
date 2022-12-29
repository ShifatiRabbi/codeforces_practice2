#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int a,b,c,res;
        cin>>a>>b>>c;
        res = (a + b + c) / 2;
        cout<<res<<endl;
    }


    return 0;
}

