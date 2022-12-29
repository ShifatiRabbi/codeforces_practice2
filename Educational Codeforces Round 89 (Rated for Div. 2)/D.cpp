#include<bits/stdc++.h>
using namespace std;
int arr[500000],a[500000],b[500000],c[500000];

int printDivisors(int m)
{
    int k=0;
    for (int j=2; j<=m; j++)
    {
        if (m%j==0)
        {
            c[k] = j;
            k++;
        }
    }
    return k;
}

int main()
{
    long long int n,i,l,p,q=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

        l = printDivisors(arr[i]);
        a[q] = c[0];
        for(p=1; p<l; p++)
        {

            if(c[p] % a[q] != 0)
            {
                b[q] = c[p];
                break;
            }
        }
         q++;
            if( a[i]>1 && b[i]>1 && a[i] != b[i] )
            {
                continue;
            }
            else
            {
                a[i] = -1;
                b[i] = -1;
            }

    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}

