#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int count = 0, max = 1;
    for(int i=0; i<n-1; i++)
    {
        count = 0;
        for(int j=i; j<n; j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count;
        }
    }
    cout<<max<<endl;

    return 0;
}

