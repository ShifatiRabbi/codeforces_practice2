#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s1;
    for(int i=0; i<t; i++)
    {

        cin>>s1;
        int len = s1.length();
        if(s1[len-1]=='o' && s1[len-2]=='p')
        {
            cout<<"FILIPINO"<<endl;
        }
        else if((s1[len-1]=='u' && s1[len-2]=='s' && s1[len-3]=='e' && s1[len-4]=='d')  ||
                (s1[len-1]=='u' && s1[len-2]=='s' && s1[len-3]=='a' && s1[len-4]=='m'))
        {
             cout<<"JAPANESE"<<endl;
        }
        else if(s1[len-1]=='a' && s1[len-2]=='d' && s1[len-3]=='i' && s1[len-4]=='n' && s1[len-5]=='m')
        {
            cout<<"KOREAN"<<endl;
        }


    }



    return 0;
}

