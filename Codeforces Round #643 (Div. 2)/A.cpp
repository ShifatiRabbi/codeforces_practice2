#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int sum=0,n,m,j,res,x,y,c;
        cin>>n>>m;
        res = n;
        x = n;
        if(m == 1)
        {
            cout<<n<<endl;
        }
        else
        {
           for(j=1; j<m; j++)
           {

                c=0;

                int min = 11;
                int max = 0;
                while(x > 10)
                {
                    y = x % 10;
                    if(y > max)
                    {
                        max = y;
                    }
                    if(y < min)
                    {
                        min = y;
                    }
                    x = x / 10;
                }
                if(x > max)
                    {
                        max = x;
                    }
                    if(x < min)
                    {
                        min = x;
                    }

                res = res + min * max;
                x = res;
           }
            cout<<res<<endl;
        }

    }
    return 0;
}

