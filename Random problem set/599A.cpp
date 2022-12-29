#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1,d2,d3;
    int x[10];
    cin>>d1>>d2>>d3;
    x[0] = d1 + d2 + d3;
    x[1] = d1 + d3 + d3 + d1;
    x[2] = d2 + d2 + d3 + d3;
    x[3] = d1 + d1 + d2 + d2;
    int min = 1000000000;
    for(int i=0; i<4; i++)
    {
        if(x[i] < min)
        {
            min = x[i];
        }
    }
    cout<<min<<endl;
    return 0;
}

