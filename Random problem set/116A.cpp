#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        sum = sum - a + b;
        if(sum > max)
        {
            max = sum;
        }
    }
    cout<<max<<endl;
    return 0;
}

