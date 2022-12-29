#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int x = 0;
        int len = a.size();
        for(int j=0; j<len; j++)
        {
            if(( c[j] == a[j] ) || ( c[j] == b[j] ))
            {
                x = 0;
            }
            else
            {
                cout<<"NO"<<endl;
                x = 1;
                break;
            }
        }
        if(x==0)
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

