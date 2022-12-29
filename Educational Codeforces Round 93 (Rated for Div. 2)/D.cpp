#include<bits/stdc++.h>
using namespace std;
int r[2000],g[2000],v[2000],k[6],l[3],j[9];

int main()
{

        int a,b,c,d=0,e=0,n,i,x=1;
        cin>>a>>b>>c;

        for(i=0; i<a; i++)
        {
            cin>>r[i];

        }
        sort(r, r+a);
        for(i=0; i<b; i++)
        {
            cin>>g[i];

        }
        sort(g, g+b);
        for(i=0; i<c; i++)
        {
            cin>>v[i];

        }
        sort(v, v+c);

        l[0] = r[a-1];
        l[1] = g[b-1];
        l[2] = v[c-1];
        sort(l, l+3);

        k[0] = l[0];
            d++;
        if(a>1)
        {
            k[d] = r[a-2];
            d++;
        }
        if(b>1)
        {
            k[d] = g[b-2];
            d++;
        }
        if(c>1)
        {
            k[d] = v[c-2];
            d++;
        }
        sort(k, k+d);

        j[0] = k[0];
            e++;
        if(a>2)
        {
            j[e] = r[a-3];
            e++;
        }
        if(b>2)
        {
            j[e] = g[b-3];
            e++;
        }
        if(c>2)
        {
            j[e] = v[c-3];
            e++;
        }
        sort(j, j+e);



        if(a==1 && b==1 && c==1)
        {
            x = x * l[2] * l[1];

        }
        else if((a+b)==2 || b+c==2 || c+a==2)
        {
            x = x * l[2] * l[1];
            x = x + k[d-1] * k[d-2];
        }
        else
        {
            x = x * l[2] * l[1];
            x = x + k[d-1] * k[d-2];

                x = x + j[e-1] * j[e-2];

        }
        cout<<x<<endl;



    return 0;
}


