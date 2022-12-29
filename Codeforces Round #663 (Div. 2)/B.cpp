#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,m,p,o,u,q,w;
    string s;
    cin >> t;
    while(t--)
    {
        int cnt=0;
        cin >> n >> m;
        if(n==1)
        {
            cin >> s;
            for(int i=0; i<m-1;i++)
            {
                if(s[i]=='D')
                    cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            for(int k=0; k<n-1; k++)
            {
                cin >> s;
                if(s[m-1]=='R')
                    cnt++;
            }
            cin >> s;
            for(int k=0; k<m-1; k++){
                if(s[k]=='D') cnt++;
            }
            cout << cnt << endl;
        }
        //ajdajdagdjsjgsjgcsjc;
    }
    return 0;
}
