#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,i=1,j=0,arr[1000];
    cin>>n;
    while(sum != n)
    {
        sum = sum + i;
        arr[j] = sum - 1;
        i++;
        j++;
    }
    j = 0;
    char array[n];
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(arr[j] == i)
        {
            cout<<array[i];
            j++;
        }
    }

    cout<<endl;

    return 0;
}

