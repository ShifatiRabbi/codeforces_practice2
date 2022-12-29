#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, x = 0;
    cin>> n;

    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<n; i++)
    {
        if(array[i]==1)
        {
            x=1;
            break;
        }

    }
    if(x==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"Easy"<<endl;
    }


    return 0;
}
