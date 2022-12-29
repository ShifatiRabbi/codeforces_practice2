#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,testok,debug;
    cin >> t;
    while(t--)
    {
        long long n, r, a, e;
        cin >> n >> r;
        if(n > r)
        {
            a = (r * (r + 1)) / 2;
        }
        else
        {
            n--;
            a = (n * (n + 1)) / 2;
            a += 1;
        }
        cout << a << endl;
    }
    return 0;
}
