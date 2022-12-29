#include<bits/stdc++.h>
using namespace std;

//shifat
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n;
        cin >> n;
        x = n/4;
        if(n%4)
        {
            x=x+1;
        }


        //shifat
        if(n==1)
        {
            cout << 8 << endl;
        }
        else if(n==2)
        {
            cout << 98 << endl;
        }
        else if(n==3)
        {
            cout << 998 << endl;
        }
        else
        {
            for(int i=0; i<n-x; i++)
            {
                cout << 9;
            }
            for(int i=n-x; i<n; i++)
            {
                cout << 8;
            }
            cout << endl;
        }
    }

   //shifat
    return 0;
}
