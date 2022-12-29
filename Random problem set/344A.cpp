#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if(i>0 && array[i]==array[i-1])
        {
            continue;
        }
        else if(i>0 && array[i]!=array[i-1])
        {
            sum++;
        }
    }
    cout<<sum<<endl;


    return 0;
}


