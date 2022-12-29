#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double array[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        sum = sum + array[i];
    }
    double res = sum / n;
    cout<<setprecision(12)<<fixed<<res<<endl;

    return 0;
}

