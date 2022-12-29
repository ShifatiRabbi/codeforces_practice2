#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {

        if(i==n)
        {
            if(i%2 != 0)
            {
                cout<<"I hate ";
            }
            else
            {
                cout<<"I love ";
            }
            break;
        }
        else if(i%2 != 0)
        {
            cout<<"I hate that ";
        }
        else if(i%2 == 0)
        {
            cout<<"I love that ";
        }
    }
    cout<<"it"<<endl;


    return 0;
}

