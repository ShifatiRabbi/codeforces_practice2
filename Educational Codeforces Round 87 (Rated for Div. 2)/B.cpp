#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        string s;
        cin>>s;
        int x = s.size();
        int arr[200000],k=0,m=0,n=0;
        int j=0,c=0;
        for(j=m; j<x; j++)
        {
            n = j;
            c=1;
            while(s[j] != s[m])
            {
                c++;
                j++;
                while(s[j] != s[m] && s[j] != s[n])
                {
                    c++;
                    arr[k] = c;
                    m++;
                    k++;
                    j=1;
                    break;
                }
                if(j == 1)
                {
                    break;
                }
            }
        }
        sort(arr, arr+k);
        if(arr[k-1] < 3)
        {
            cout<<0<<endl;
        }
        else
        {
            for(j=0; j<k; j++)
            {
                if(arr[j] >= 3)
                {
                    cout<<arr[j]<<endl;
                    break;
                }
            }
        }


    }

    return 0;
}


