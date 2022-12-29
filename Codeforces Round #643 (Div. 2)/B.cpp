#include<bits/stdc++.h>
using namespace std;
int b[1000];

int main()
{
    int arr[4],c=0,k=0;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }

    if((arr[0]+arr[1]>arr[2]) && (arr[2]+arr[1]>arr[0]) && (arr[0]+arr[2]>arr[1]))
    {
        c++;
        b[k] = (arr[0]+arr[1]+arr[2]);
        k++;
    }

    if((arr[0]+arr[2]>arr[3]) && (arr[3]+arr[0]>arr[2]) && (arr[3]+arr[2]>arr[0]))
    {
        c++;
        b[k] = (arr[0]+arr[3]+arr[2]);
        k++;
    }

    if((arr[3]+arr[1]>arr[2]) && (arr[2]+arr[1]>arr[3]) && (arr[3]+arr[2]>arr[1]))
    {
        c++;
        b[k] = (arr[3]+arr[1]+arr[2]);
        k++;
    }

    if((arr[0]+arr[1]>arr[3]) && (arr[3]+arr[1]>arr[0]) && (arr[0]+arr[3]>arr[1]))
    {
        c++;
        b[k] = (arr[0]+arr[1]+arr[3]);
        k++;
    }
    c=1;

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(b[i] != b[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

