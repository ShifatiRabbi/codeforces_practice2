#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len,c=0,i,x=0,y=0;
        len = s.size();
        for(i=0; i<len; i++)
        {
            if(s[i]=='0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(x==len || y==len)
        {
            cout<<"NET"<<endl;
        }
        else if(x > y)
        {
            c = y;
            if(c%2 == 0)
            {
               cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
        }
        else
        {
            c = x;
            if(c%2 == 0)
            {
               cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
        }

    }


    return 0;
}
