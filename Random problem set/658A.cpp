#include<bits/stdc++.h>
using namespace std;
int p[10000],t[10000];

int main()
{
    int n,c,sum1=0,sum2=0,x=0;
    cin>>n>>c;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
    }
    for(int i=0; i<n; i++)
    {
        x = x + t[i];
        if(x*c > p[i])
        {
            sum1 = sum1 - 0;
        }
        else
        {
            sum1 = sum1 + p[i] - (x * c);
        }

    }
    x = 0;
    for(int i=n-1; i>=0; i--)
    {
        x = x + t[i];
        if(x*c > p[i])
        {
            sum2 = sum2 - 0;
        }
        else
        {
            sum2 = sum2 + p[i] - (x * c);
        }
    }
    if(sum1 > sum2)
    {
        cout<<"Limak"<<endl;
    }
    else if(sum1 < sum2)
    {
        cout<<"Radewoosh"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
    }

    return 0;
}

