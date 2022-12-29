#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,j=0;
    cin>>n;
    int arr[1000];
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if(i>0 && array[i] == 1)
        {
            c++;
            arr[j] = array[i-1];
            j++;
        }

    }
        arr[j] = array[n-1];
        j++;
    cout<<j<<endl;
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

