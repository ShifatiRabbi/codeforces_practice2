#include<bits/stdc++.h>
using namespace std;
int a[105],b[105];

int main()
{
    long long int t,i,n,j,c=0,k=0;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        for(i=0; i<n*2; i++)
        {
            cin>>a[i];
            for(j=0; j<i; j++)
            {
                if(a[i] == a[j])
                {
                    c = 1;
                    break;
                }
            }
            if(c == 0)
            {
                b[k] = a[i];
                k++;
            }
            else
            {
                c = 0;
            }
        }
        for(i=0; i<k; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}

