#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i;
    cin>>t;

    cout<<"codeforces";
    if(t==1)
    {
        cout<<endl;
    }
    else if(t==2)
    {
        cout<<"s";
    }
    else if(t<=6)
    {
        cout<<"cod";
    }
    else if(t<=24)
    {
        cout<<"code";
    }
    else if(t<=120)
    {
        cout<<"codef";
    }
    else if(t<=360)
    {
        cout<<"codefo";
    }
    else if(t<=2520)
    {
        cout<<"codefor";
    }
    else if(t<=20160)
    {
        cout<<"codeforc";
    }
    else if(t<=90720)
    {
        cout<<"codeforce";
    }
    else if(t<=907200)
    {
        cout<<"codeforces";
    }
    else if(t<=9979200)
    {
        cout<<"codeforcesc";
    }
    else if(t<=119750400)
    {
        cout<<"codeforcesco";
    }

    else
    {
        cout<<"codeforcescodeforces";
    }

    return 0;
}

