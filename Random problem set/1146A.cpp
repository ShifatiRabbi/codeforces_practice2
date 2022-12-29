#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int count = 0;
    int len = x.length();

    for(int i=0; i<len; i++)
    {
        if(x[i] == 'a')
        {
            count++;
        }
    }
    if(count <= len/2)
    {
        len = len / 2;
        while(count <= len)
        {
            len = len - 1;
        }
        cout<<len+count<<endl;
    }
    else
    {
        cout<<len<<endl;
    }



    return 0;
}

