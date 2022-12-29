#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    cout<<"NO"<<endl;
    for(int i=1; i<n; i++)
    {
        int c = 1;
        for(int j=0; j<i; j++)
        {
            if(s[i] != s[j])
            {
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                c = 0;
                break;
            }
        }
        if(c == 1)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

