
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
    int count = 0;
    sort(array, array+n);
    for(int i=1; i<n; i=i+2)
    {
        count = count + abs(array[i] - array[i-1]);
    }
    cout<<count<<endl;

    return 0;
}

