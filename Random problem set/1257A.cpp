#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,x,a,b,sum;
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        sum = b - a;
        while(x > 0)
        {
            if(sum >= n-1)
            {
                break;
            }
            else
            {
                sum++;
            }
            x--;
        }

        cout<<sum<<endl;
    }

    return 0;
}

