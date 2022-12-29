#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max,sum=0;
    cin>>n;
    int array[n];
    cin>>array[0];
    max = array[0];
    for(int i=1; i<n; i++)
    {
        cin>>array[i];
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + ( max - array[i] );
    }
    cout<<sum<<endl;

    return 0;
}

