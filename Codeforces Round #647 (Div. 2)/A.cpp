#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=0;
        if(a == b)
        {
            cout<<0<<endl;
        }
        else if(a < b)
        {
            if(b%a != 0 || b%2 !=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                while(b/8 >= a)
                {
                    b = b / 8;
                    x++;
                }
                while(b/4 >= a)
                {
                    b = b / 4;
                    x++;
                }
                while(b/2 >= a)
                {
                    b = b / 2;
                    x++;
                }


                cout<<x<<endl;
            }
        }
        else{
            if(a%b != 0 || a%2 !=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                while(a/8 >= b)
                {
                    a = a / 8;
                    x++;
                }
                while(a/4 >= b)
                {
                    a = a / 4;
                    x++;
                }
                while(a/2 >= b)
                {
                    a = a / 2;
                    x++;
                }


                cout<<x<<endl;
            }

        }


    }

    return 0;
}
