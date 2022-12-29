#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,j=0;
    cin>>n;
    int arr[1000];
    char array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i] == 'B')
        {
            c++;
        }
        else
        {
            if(c>0)
            {
                arr[j] = c;
                j++;
            }
            c = 0;
        }

    }
    if(c>0)
            {
                arr[j] = c;
                j++;
            }
    cout<<j<<endl;
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

