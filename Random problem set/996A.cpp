#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m = 0;
    cin>>n;

    for(int i=0; i<200000000; i++)
    {

        if( n>=100 )
        {
            n = n - 100;
            m++;
            continue;
        }

        else if( n<100 && n>=20 )
        {
            n = n - 20;
            m++;
            continue;
        }

        else if( n<20 && n>=10 )
        {
            n = n - 10;
            m++;
            continue;
        }

        else if( n<10 && n>=5 )
        {
            n = n - 5;
            m++;
            continue;
        }

        else if( n<5 && n>=1 )
        {
            n = n - 1;
            m++;
            continue;
        }

        else if( n == 0 )
        {
            break;
        }

    }


    cout<<m<<endl;

    return 0;
}

