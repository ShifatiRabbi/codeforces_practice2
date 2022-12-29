#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y;
    cin>>x>>y;
    string array1[x], array2[y];
    for(int i=0; i<x; i++)
    {
        cin>>array1[i];
    }
    for(int i=0; i<y; i++)
    {
        cin>>array2[i];
    }

    int t,n;
    cin>>t;
    string z;
    for(int i=0; i<t; i++)
    {

        cin>>n;
        int m = n;
        int q = n;

        if(n%x == 0)
        {
            n = x;
        }
        else if(n>x)
        {
            n = n % x;
        }

        if(m%y == 0)
        {
            m = y;
        }
        else if(m>=y)
        {
            m = m % y ;
        }


        z = array1[n-1] + array2[m-1];
        cout<<z<<endl;
    }


    return 0;
}


