#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m = n;
    if(n%2 != 0)
    {
        n = n - 1;
    }

    if(m == n)
    {
        n = n / 2;
        cout<<n<<endl;
        for(int i=0; i<n; i++)
        {
           cout<<2<<" ";
        }
    }
    else
    {
        n = n / 2;
        cout<<n<<endl;
        for(int i=0; i<n-1; i++)
        {
           cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    cout<<endl;

    return 0;
}

