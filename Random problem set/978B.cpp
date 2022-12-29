#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    char array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=2; i<n; i++)
    {
        if(array[i]=='x' && array[i-1]=='x' && array[i-2]=='x')
        {
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}


