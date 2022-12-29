#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;

    int n = x[6] - '0';
    if(n%2 == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }


    return 0;
}

