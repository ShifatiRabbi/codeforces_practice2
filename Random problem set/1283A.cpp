#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int h,m,r;
        cin>>h>>m;
        r = ((23 - h) * 60) + (60 - m);
        cout<<r<<endl;
    }


    return 0;
}

