#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[4];
    int i,max, a,b,c;
    for(i=0; i<4; i++)
    {
        cin>>array[i];
    }

    sort(array, array + 4);
    max = array[3];

    a = ( array[0] + array[1] ) - max;
    c = ( array[0] + array[2] ) - max;
    b = ( array[1] + array[2] ) - max;

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}

