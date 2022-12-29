#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n<31)
            cout << "NO"<<endl;
        else if(n==36)
            {cout << "YES"<<endl;
            cout<<"5 6 10 15" << endl;}
        else if(n==40)
            {cout << "YES"<<endl;
            cout<<"6 10 22 2" << endl;}
        else if(n==44)
           { cout << "YES"<<endl;
            cout<<"6 7 10 21" << endl;}
        else
        {
            int z = n-6-10-14;
            cout << "YES"<<endl;
            cout<<"6 10 14 " << z << endl;
        }
    }
    return 0;
}
