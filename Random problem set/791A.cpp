#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int x=0;
    do{
        x++;
        a = a * 3;
        b = b * 2;
    }
    while(a<=b);

    cout<<x<<endl;

    return 0;
}

