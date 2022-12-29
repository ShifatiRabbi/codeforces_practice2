#include<bits/stdc++.h>
using namespace std;
int a1[100],a2[100];

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k1,k2,  max1=0  , max2=0;
        cin>>n>>k1>>k2;
        for(int j=0; j<k1; j++)
        {
            cin>>a1[i];
            if( a1[i] > max1 )
            {
                max1 = a1[i];
            }
        }
        for(int j=0; j<k2; j++)
        {
            cin>>a2[i];
            if( a2[i] > max2 )
            {
                max2 = a2[i];
            }
        }
        if(max1 > max2)
        {
            cout<<"YES"<<endl;
        }
        else if(max1 < max2)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

