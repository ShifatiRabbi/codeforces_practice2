#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
char arr[100];

int main()
{
    int j=0;
    string s;
    getline (cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr, arr+j);
    int x=0 ;
    if(j > 0)
    {
        x = 1;
    }
    for(int i=1; i<j; i++)
    {
        if(arr[i] != arr[i-1])
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}

