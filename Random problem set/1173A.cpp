#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c > 0)
    {
        if(a>b)
        {
            b = b + c;
            if(a > b)
            {
                cout<<"+"<<endl;
            }
            else
            {
                cout<<"?"<<endl;
            }
        }
        else if(a<b)
        {
            a = a + c;
            if(a < b)
            {
                cout<<"-"<<endl;
            }
            else
            {
                cout<<"?"<<endl;
            }
        }
        else
        {
            cout<<"?"<<endl;
        }

    }
    else if(a > b)
    {
        cout<<"+"<<endl;
    }
    else if(b > a)
    {
        cout<<"-"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }


    return 0;
}

