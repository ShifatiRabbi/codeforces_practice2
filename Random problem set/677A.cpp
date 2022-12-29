#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,sum=0;
    cin>>n>>h;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i] > h)
        {
            sum = sum + 2;
        }
        else
        {
            sum = sum + 1;
        }
    }
    cout<<sum<<endl;


    return 0;
}

