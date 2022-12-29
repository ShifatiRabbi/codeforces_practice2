#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fs=0,sf=0;
    cin>>n;
    char array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=1; i<n; i++)
    {
        if(array[i-1]=='F' && array[i]=='S')
        {
            fs++;
        }
        else if(array[i-1]=='S' && array[i]=='F')
        {
            sf++;
        }
    }
    if(fs<sf)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}

