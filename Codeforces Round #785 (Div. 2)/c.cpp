#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a=0,b=0,c=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int j=0; j<s2.length(); j++)
        {
            if(s2[j] == 'a')
            {
                a++;
            }
            else
            {
                b++;
                if(a > 0)
                {
                    break;
                }
            }
        }


        if(a>0 && b==0)
        {
            cout<<"1"<<endl;
        }
        else if(a==0 && b>0)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }


    return 0;
}

