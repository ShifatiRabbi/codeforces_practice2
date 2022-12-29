#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x=0,y=0;
    cin>>n;
    char array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i] == 'n')
        {
            x++;
        }
        else if(array[i] == 'z')
        {
            y++;
        }
    }
    int i=0;
    while(i<x)
    {
        cout<<"1 ";
        i++;
    }
    i=0;
    while(i<y)
    {
        cout<<"0 ";
        i++;
    }


    return 0;
}

