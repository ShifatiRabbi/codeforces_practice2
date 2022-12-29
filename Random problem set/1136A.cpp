#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];

int main()
{
    int n,x,c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(x>=a[i] && x<=b[i])
        {
            c = n - i;
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}

