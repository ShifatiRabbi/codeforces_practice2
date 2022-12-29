#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,c;
        cin>>n;
        if(n<8)
        {
            cout<<1<<endl;
        }
        else
        {
            c = n / 5;
            if(n % 5 != 0)
            {
                c++;
            }
            cout<<c<<endl;
        }
    }

    return 0;
}

