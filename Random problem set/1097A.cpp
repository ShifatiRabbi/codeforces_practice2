#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x,array[5];
    int c=0;
    cin>>x;
    for(int i=0; i<5; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<5; i++)
    {

        if(x[0] == array[i][0])
        {
            cout<<"YES"<<endl;
            c=0;
            break;
        }
        else
        {
            if(x[1] == array[i][1])
            {
                cout<<"YES"<<endl;
                c=0;
                break;
            }
            else
            {
                c=1;
            }
        }

    }
    if(c==1)
        cout<<"NO"<<endl;


    return 0;
}
