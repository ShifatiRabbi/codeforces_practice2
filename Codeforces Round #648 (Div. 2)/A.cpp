#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast
    int t,n,m,xx,yy;
    cin >> t;
    while(t--)
    {
        int arr[60][60];
        int cnt=0,x=0,y=0;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            int test = 0;
            for(int j=0; j<m; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]==1)
                {
                    test = 1;
                }
            }
            if(test==0)
                x++;
        }
        for(int i=0; i<m; i++)
        {
            int test = 0;
            for(int j=0; j<n; j++)
            {
                if(arr[j][i]==1)
                {
                    test = 1;
                }
            }
            if(test==0)
                y++;
        }
        n = min(x,y);
        if(n%2==0)
            cout << "Vivek\n";
        else
            cout << "Ashish\n";
    }
    return 0;
}
