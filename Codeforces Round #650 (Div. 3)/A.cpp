#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        char a[1000];
        cin>>b;
        int n,i,j=2;
        n = b.size();

        a[0] = b[0];
        a[1] = b[1];
        if(n>2)
        {
            for(i=2; i<n; i++)
            {
                if(i%2 != 0)
                {
                    a[j] = b[i];
                    j++;
                }
            }
        }

        for(i=0; i<j; i++)
        {
            cout<<a[i];
        }
        cout<<endl;

    }

    return 0;
}
