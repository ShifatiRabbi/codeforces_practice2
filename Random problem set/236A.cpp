#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c = 0;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<i; j++)
        {
            if(s[i] == s[j])
            {
                c++;
                break;
            }
        }
    }
    c = s.size() - c;
    if(c % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}

