#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,j,c=0,n,a,b,m,temp;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m>>n;
        i=m;
        j=n;

            temp = i;
            i = j;
            j = temp;



        if((a+b) < (m+n))
        {
            cout<<"NO"<<endl;
        }
        else if(a==0 && b>a && m>=0 && n>=0)
        {
            cout<<"NO"<<endl;
        }
        else if((a>=m && b>=m) && (a>=n && b>=n))
        {
            cout<<"YES"<<endl;
        }
        else if((a>=m && b>=n) || (a>=i && b>=j))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }



    return 0;
}
