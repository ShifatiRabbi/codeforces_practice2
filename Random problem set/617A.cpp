#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    while(n != 0)
    {
        if(n>=5)
        {
            sum = sum + (n / 5);
            n = n % 5;
        }
        else if(n==4)
        {
            sum = sum + 1;
            n = n - 4;
        }
        else if(n==3)
        {
            sum = sum + 1;
            n = n - 3;
        }
        else if(n==2)
        {
            sum = sum + 1;
            n = n - 2;
        }
        else if(n==1)
        {
            sum = sum + 1;
            n = n - 1;
        }

    }
    cout<<sum<<endl;

    return 0;
}

