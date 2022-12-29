#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int x = n - 11 + 1;
        for(int j=0; j<x; j++)
        {
            if(s[j]-'0' == 8)
            {
                cout<<"YES"<<endl;
                n = 0;
                break;
            }
        }
        if(n != 0)
        {
           cout<<"NO"<<endl;
        }

    }


    return 0;
}

