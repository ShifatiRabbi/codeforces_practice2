#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int b,p,f,h,c,sum;
        cin>>b>>p>>f>>h>>c;
        if(b<=1)
        {
            cout<<0<<endl;
        }
        else
        {

            if(b%2 != 0)
            {
                b = b - 1;
            }
            b = b / 2;
            if(b >= (p + f))
            {
                sum = (p * h) + (f * c);
                cout<<sum<<endl;
            }
            else
            {
                if(h >= c)
                {
                    if(b > p)
                    {
                        sum = (p * h) + ((b-p) * c);
                    }
                    else
                    {
                        sum = b * h;
                    }
                    cout<<sum<<endl;
                }
                else
                {
                    if(b > f)
                    {
                        sum = (f * c) + ((b-f) * h);
                    }
                    else
                    {
                        sum = b * c;
                    }
                    cout<<sum<<endl;
                }
            }

        }

    }

    return 0;
}









