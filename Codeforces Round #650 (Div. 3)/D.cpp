#include<bits/stdc++.h>
using namespace std;
int a[55],b[55];


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m,n,i,j,x,c,sum=0,k=0;
        m = s.size();

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                if(s[i]-'a'<s[j]-'a')
                {
                    sum = sum + abs((s[i]-'a')-(s[j]-'a'))
                }
            }
            b[k] = sum;
            k++;
            sum=0;
        }

        for(i=0)

    }

    return 0;
}

