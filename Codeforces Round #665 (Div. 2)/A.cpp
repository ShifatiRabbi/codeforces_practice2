#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j;
        cin>>n>>k;

        if(n == k)
        {
            cout<<0<<endl;
        }
        else if(n < k)
        {
            i = n - 0;
            j = k - n;
            if(i > j)
            {
                cout<<j<<endl;
            }
            else
            {
                cout<<i<<endl;
            }
        }
        else
        {
            i = n - k;
            j = k - 0;
            if(i > j)
            {
                cout<<j<<endl;
            }
            else
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}
