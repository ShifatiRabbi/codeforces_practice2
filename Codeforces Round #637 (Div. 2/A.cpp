#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       double a,b,c,d,n;
       cin>>n>>a>>b>>c>>d;

       double x1 = a - b;
       double x2 = a + b;
       double y1 = c - d;
       double y2 = c + d;

           if((y2/x1<n) || (y1/x2>n ))
           {
               cout<<"No"<<endl;
           }
           else
           {
               cout<<"Yes"<<endl;
           }


    }



    return 0;
}

