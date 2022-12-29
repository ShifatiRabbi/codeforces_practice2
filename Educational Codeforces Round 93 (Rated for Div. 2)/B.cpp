#include<bits/stdc++.h>
using namespace std;
int arr[100];

int main()
{
    int llll,arr[50005],n;
    string s;
    cin >> llll;



    for(int pppp=0; pppp<llll; pppp++)
    {
        vector<int>v;
        int cnt = 0;
        cin >> s;



        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
            else
            {
                if(cnt!=0)
                    v.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt!=0)
            v.push_back(cnt);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans = 0;

      //  Shifati Rabbi;


        for(int i=1; i<=v.size(); i++)
        {
            if(i%2==1)
                ans+=v[i-1];
        }
           cout << ans << endl;
    }

    return 0;
}

