#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0,y=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        x++;
        if(s[i] % 2 == 0)
        {
            y = y + x;
        }
    }
    cout<<y<<endl;
    return 0;
}

