#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a<b){
            swap(a,b);
        }
        if(a<=2*b) cout << 2*b*2*b << endl;
        else cout << a*a << endl;
    }
    return 0;
}
