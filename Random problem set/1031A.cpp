#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,k,sum=0;
    cin>>w>>h>>k;
    w = w - 2;
    for(int i=0; i<k; i++)
    {
        sum = sum + w * 2 + h * 2;
        w = w - 4;
        h = h - 4;
    }
    cout<<sum<<endl;

    return 0;
}

