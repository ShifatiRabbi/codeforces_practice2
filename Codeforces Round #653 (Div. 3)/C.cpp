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
   // FI(); /// skip this line for compile
    int t,n,x=0,y=0,ans,cnt,xxx,yyy;
    string s;
    cin >> t;
    while(t--){
            x=y=cnt=ans=0;
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')' && cnt>0) cnt--;
            else ans++;
        }
    cout << ans << endl;
    }
    return 0;
}
