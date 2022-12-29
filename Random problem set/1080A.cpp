#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n>>k;
    int r,g,b;
    r = (n * 2 + k -1) / k  ;
    g = (n * 5 + k -1) / k  ;
    b = (n * 8 + k -1) / k  ;
    x = r + g + b;
    cout<<x<<endl;
    return 0;
}

