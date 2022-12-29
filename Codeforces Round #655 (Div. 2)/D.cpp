#include<bits/stdc++.h>
using namespace std;
int arr[200000];

int main()
{
    long long int n,sum=0,i,c=0;
    cin>>n;
    if(n == 1)
    {
        cin>>arr[0];
        cout<<arr[0]<<endl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            c++;
            if(c == 3)
            {
                c = 1;
                continue;
            }
            else{
                sum = sum + arr[i];
            }

        }
        cout<<sum<<endl;
    }

    return 0;
}


