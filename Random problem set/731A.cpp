#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char x = 'a';
    cin>>s;
    int i, sum = 0, sum1,sum2;
    int len = s.size();
    for(i=0; i<len; i++)
    {
        sum1 = abs(s[i] - x);
        sum2 = 26 - abs(s[i] - x );
        if(sum1 <= sum2)
        {
            sum = sum + sum1;
        }
        else
        {
            sum = sum + sum2;
        }
        x = s[i];
    }
    cout<<sum<<endl;
    return 0;
}

