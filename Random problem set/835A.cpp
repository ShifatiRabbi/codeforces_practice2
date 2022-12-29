#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,v1,v2,t1,t2,x,y;
    cin>>s>>v1>>v2>>t1>>t2;
    x = 2 * t1 + s * v1;
    y = 2 * t2 + s * v2;
    if(x<y)
    {
        cout<<"First"<<endl;
    }
    else if(x>y)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}

