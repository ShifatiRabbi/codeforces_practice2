#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    string array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];

        if(array[i]=="Tetrahedron")
        {
            sum = sum + 4;
        }

        else if(array[i]=="Cube")
        {
            sum = sum + 6;
        }

        else if(array[i]=="Octahedron")
        {
            sum = sum + 8;
        }

        else if(array[i]=="Dodecahedron")
        {
            sum = sum + 12;
        }

        else if(array[i]=="Icosahedron")
        {
            sum = sum + 20;
        }

    }
    cout<<sum<<endl;



    return 0;
}

