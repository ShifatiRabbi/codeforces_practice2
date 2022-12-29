#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4],x=0;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<4; i++)
    {
        for(int j=i; j<4; j++)
        {
            if(i!=j && arr[i] == arr[j])
            {
                x++;
            }
        }
    }
    if( x == 1)
    {
        x = 1;
    }
    else if( x == 2 || x == 3)
    {
        x = 2;
    }
    else if( x > 3)
    {
        x = 3;
    }
    cout<<x<<endl;
    return 0;
}

