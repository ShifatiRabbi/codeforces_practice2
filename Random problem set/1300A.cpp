#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,sum=0;
        cin>>n;
        int array[n];
        int count = 0;
        for(int j=0; j<n; j++)
        {
            cin>>array[j];
            if(array[j] == 0)
            {
                array[j] = 1;
                count++;
            }
            sum = sum + array[j];

        }
        if(sum == 0)
            {
                count++;
            }
        cout<<count<<endl;
    }

    return 0;
}

