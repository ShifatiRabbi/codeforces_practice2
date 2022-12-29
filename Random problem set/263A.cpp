#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,num,x,y;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>num;
            if(num == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    int sum = 0;
    {
        if(x>3)
        {
            sum = x - 3;
        }
        else if(x<=3)
        {
            sum = 3 - x;
        }
    }

    {
        if(y>3)
        {
            sum = sum + y - 3;
        }
        else if(y<=3)
        {
            sum = sum + 3 - y;
        }
    }

    cout<<sum<<endl;

    return 0;
}

