#include<bits/stdc++.h>
using namespace std;
int arr[200000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x,z,i,j=0,c=0,sum=0,y;
       cin>>n>>x>>z;
       if(x == z)
       {
           z = 0;
       }
       for(i=0; i<n; i++)
       {
           cin>>arr[i];
           if(i<x-1 && arr[i]>c)
           {
               c = arr[i];
               y = i;
           }
       }
        sum = arr[0];
       for(i=0; i<n-1; i++)
       {

           if(j<x)
           {
               if(i != y+1)
               {
                   sum = sum + arr[i+1];
                   j++;
               }
               else if(i == y+1 && z>0)
               {
                   sum = sum + arr[i-1];
                   j++;
                   i = i - 2;
               }
               else if(i == y+1 && z<=0)
               {
                   sum = sum + arr[i+1];
                   j++;
               }

           }
           else
           {
               break;
           }
       }
       cout<<sum<<endl;

    }

    return 0;
}

