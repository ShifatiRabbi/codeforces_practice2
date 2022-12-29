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
        int c=0,x,i,m=0;
        sort(s.begin(), s.end());
        x = s.size();
        for(i=0; i<x-1; i++)
        {
            if(s[i] == s[i+1])
            {
                c++;
            }
            else
            {
               if(c > m)
               {
                   m = c;
                   c = 0;
               }

            }
        }

    }

    return 0;
}


