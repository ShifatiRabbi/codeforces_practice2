#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[4];
    for(int i=0; i<4; i++)
    {
        cin>>array[i];
    }
    string s;
    cin>>s;
    int sum = 0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if((s[i] - '0') == 1)
        {
            sum = sum + array[0];
        }
        else if((s[i] - '0') == 2)
        {
            sum = sum + array[1];
        }
        else if((s[i] - '0') == 3)
        {
            sum = sum + array[2];
        }
        else if((s[i] - '0') == 4)
        {
            sum = sum + array[3];
        }
    }
    cout<<sum<<endl;


    return 0;
}

