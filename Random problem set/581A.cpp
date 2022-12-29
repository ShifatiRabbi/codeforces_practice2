#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,temp;
    cin>>n>>m;
    if(n<m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    cout<<m<<" ";
    int sum = n - m;
    if(sum%2 != 0)
    {
        sum = sum - 1;
    }
    sum = sum / 2;
    cout<<sum<<endl;


    return 0;
}

