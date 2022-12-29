#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        string s;
        cin>>s;
        int j,x=0,y=0,len = s.size();
        for(j=0; j<len; j++)
        {
            if(s[j] - '0' == 1)
            {
                x = j;
                break;
            }
        }
        for(j=x; j<len; j++)
        {
            if(s[j] - '0' == 1)
            {
                y = j;
            }
        }
        int c = 0;
        if(x>=0 && y>0)
        {
            for(j=x; j<=y; j++)
            {
                if(s[j] - '0' == 0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

