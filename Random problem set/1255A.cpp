#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int a,b,sum,c=0;
        cin>>a>>b;
        sum = abs(a - b);
        while(sum != 0)
        {
            if(sum >= 5)
            {
                c = c + sum / 5;
                sum = sum % 5;
            }
            else if(sum >= 2)
            {
                c = c + sum / 2;
                sum = sum % 2;
            }
            else if(sum >= 1)
            {
                c = c + sum / 1;
                sum = sum % 1;
            }
        }
       cout<<c<<endl;
    }

    return 0;
}

