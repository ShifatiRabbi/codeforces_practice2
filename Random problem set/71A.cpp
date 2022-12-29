#include<bits/stdc++.h>
using namespace std;
string s[110];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>s[i];
        int len = s[i].size();
        if(len <= 10)
        {
            cout<<s[i]<<endl;
        }
        else
        {
            cout<<s[i][0]<<len-2<<s[i][len-1]<<endl;
        }
    }

    return 0;
}

