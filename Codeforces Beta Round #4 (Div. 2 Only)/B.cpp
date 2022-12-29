#include<bits/stdc++.h>
using namespace std;
int arr[100],brr[100];

int main()
{
    int d,t,sum = 0;
    cin>>d>>t;
    for(int i=0; i<d; i++)
    {
        int a,b;
        cin>>a>>b;
        sum = sum + b;
        arr[i] = a;
        brr[i] = b;
    }
    if(arr[0] > t && d == 1)
    {
        cout<<"NO"<<endl;
    }
    else if(sum < t)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        sum = 0;
         int m = 1;
        cout<<"YES"<<endl;
        for(int i=0; i<d; i++)
        {

            sum = sum + brr[i];
            if(sum > t && m == 1)
            {
                m = sum - brr[i];
                m = abs(m - t);
                cout<<m<<" ";
                m=0;
                continue;
            }

            if(sum <= t)
                cout<<brr[i]<<" ";
            else
            {
               cout<<m<<" ";
            }
        }

    }

    return 0;
}

