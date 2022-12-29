#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=10,y=12;
     cin>>n;
        int m = n;

        if(n>=x)
        {
            n = n % x ;
        }
        cout<<n<<endl;
        if(m>=y)
        {
            m = m % y ;
        }
        cout<<m<<endl;


    return 0;
}

