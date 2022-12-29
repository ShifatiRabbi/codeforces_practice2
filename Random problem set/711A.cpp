#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin>>n;
    string array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<5; j++)
        {
            if(array[i][j-1]=='O' && array[i][j]=='O')
            {
                c = 1;
                array[i][j-1] = '+';
                array[i][j] = '+';
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<array[i]<<endl;
        }

    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}

