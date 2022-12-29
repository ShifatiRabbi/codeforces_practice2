#include<bits/stdc++.h>
using namespace std;
char arr[100],brr[100];

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int x=0,y=0,m = 0;
    int n = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for(int i=0; i<c.size(); i++)
    {
        if(a[m] == c[i])
        {
            arr[m] = c[i];
            m++;
        }
        else
        {
            brr[n] = c[i];
            n++;
        }
    }

    for(int i=0; i<m; i++)
    {
        if(a[i] == arr[i])
        {
            continue;
        }
        else
        {
            x = 1;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(b[i] == brr[i])
        {
            continue;
        }
        else
        {
            y = 1;
            break;
        }
    }
    int o = a.size();
    int p = b.size();
    int q = c.size();
    if(o+p > q)
    {
        cout<<"NO"<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

