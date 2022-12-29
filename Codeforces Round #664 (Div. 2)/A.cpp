#include<bits/stdc++.h>
using namespace std;
int arr[10];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c=0,i,o=0,e=0;
        for(i=0; i<4; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<4; i++)
        {
            if(arr[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }

        if(arr[1]==0 && arr[0]==0 && arr[2]==0 && arr[3]>=0)
        {
            cout<<"YES"<<endl;
        }
        else if(arr[1]==0 || arr[0]==0 || arr[2]==0)
        {
            cout<<"NO"<<endl;
        }
        else if(o>=3)
        {
            cout<<"YES"<<endl;
        }
        else if(o==2)
        {
            cout<<"NO"<<endl;
        }
        else if(o<=1)
        {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}
