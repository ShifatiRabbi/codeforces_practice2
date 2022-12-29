#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];

int main()
{
    int n,m,i,c=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<m*2; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(int j=1; j<m*2; j= j+2)
        {
            if(arr[i][j-1]==1 || arr[i][j]==1)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

