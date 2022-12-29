#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];

int main()
{
    int n,sum = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if( i == j)
            {
                sum = sum + arr[i][j];
            }
            else if( i + j == n - 1)
            {
                sum = sum + arr[i][j];
            }
            else if( i == n/2)
            {
                sum = sum + arr[i][j];
            }
            else if( j == n/2)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

