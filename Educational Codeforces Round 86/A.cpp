#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        long long int sum1 , sum2;
        long long int temp;
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        long long int z = y - x;
        sum1 = z * a + x * b;

        sum2 = z * b + x * a * 2;

        if(sum1<sum2)
        {
            cout<<sum1<<endl;
        }
        else
        {
            cout<<sum2<<endl;
        }

    }



    return 0;
}

