#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        c=0;
        int len = s.size();
        if(len<3)
        {
            cout<<0<<endl;
        }
        else if(len == 3)
        {
            if((s[0]=='1' && s[1]=='0' && s[2]=='1') || (s[0]=='0' && s[1]=='1' && s[2]=='0'))
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            for(i=0; i<len; i++)
            {
                if(s[i] == '1')
                {
                   c++;
                }
            }
            if(c > len-2)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<c<<endl;
            }
        }

    }

    return 0;
}

