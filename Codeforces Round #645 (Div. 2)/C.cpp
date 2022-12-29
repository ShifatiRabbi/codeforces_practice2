#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
        {
            cout<<0<<endl;
        }
        else if(a==c || b==d)
        {
            cout<<1<<endl;
        }
        else
        {
            n = abs(a-c) + abs(b-d);
            cout<<n<<endl;
        }

    }

    return 0;
}

