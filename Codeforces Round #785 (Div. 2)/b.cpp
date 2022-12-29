#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        int a,b,x;
        cin>>s;
        a = s[1] - 'a' +1;
        b = (s[0] - 'a' ) * 26 ;
        if(s[0] > s[1])
        {
           x = (s[0] - 'a' );
        }
        else
        {
            x = (s[0] - 'a' )+1;
        }
        cout<<b+a-x<<endl;
    }

    return 0;
}
