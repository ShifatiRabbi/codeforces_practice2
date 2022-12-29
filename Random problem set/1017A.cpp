#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int   id = 1;
    int sum, e, g, m, h;
    cin>>e>>g>>m>>h;
    int highest = e + g + m + h;
    for(int i=1; i<n; i++)
    {
        cin>>e>>g>>m>>h;
        sum = e + g + m + h;
        if(sum > highest)
        {
            id++;
        }
    }
    cout<<id<<endl;
    return 0;
}

