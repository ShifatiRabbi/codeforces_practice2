#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}
int main()
{
    fast
    //FI(); /// skip this line for compile
    ll t,n,x,y,ans,xxx,yyy;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> n;
        n = n - y;
        ans = n/x;
        ans = ans*x+y;
        cout << ans << endl;
    }
    return 0;
}
