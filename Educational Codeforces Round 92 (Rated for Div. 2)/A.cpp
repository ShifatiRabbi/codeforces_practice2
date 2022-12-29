#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a==1)
        {
            cout << a << " " << b << endl;
        }
        else if(a%2==0)
        {
            if(a*2<=b)
                cout << a << " " << a*2 << endl;
            else
                cout << -1 << " " << -1 << endl;
        }
        else if(a%2==1)
        {
            if((a+1)*2<=b)
                cout << a+1 << " " << (a+1)*2 << endl;
            else
                cout << -1 << " " << -1 << endl;
            // else cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
