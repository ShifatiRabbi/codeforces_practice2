#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1[6] = {"purple","green","blue","orange","red","yellow"};
    string s2[6] = {"Power","Time","Space","Soul","Reality","Mind"};
    int n;
    cin>>n;
    string s4[6];
    for(int i=0; i<n; i++)
    {
        string s3;
        cin>>s3;
        if(s3 == "purple")
        {
            s1[0] = "1";
        }
        else if(s3 == "green")
        {
            s1[1] = "1";
        }
        else if(s3 == "blue")
        {
            s1[2] = "1";
        }
        else if(s3 == "orange")
        {
            s1[3] = "1";
        }
        else if(s3 == "red")
        {
            s1[4] = "1";
        }
        else if(s3 == "yellow")
        {
            s1[5] = "1";
        }
    }
    int j = 0;
    for(int i=0; i<6; i++)
    {
        if(s1[i] == "1")
        {
            continue;
        }
        else
        {
            s4[j] = s2[i];
            j++;
        }
    }
    cout<<j<<endl;
    for(int i=0; i<j; i++)
    {
        cout<<s4[i]<<endl;
    }

    return 0;
}

