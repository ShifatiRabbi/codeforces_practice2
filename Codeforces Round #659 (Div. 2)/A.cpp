


#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--)
    {

        string s = "asdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnmqwertyuiop";
        string sr[2] = {"qwer" , "tyui"};
        int arr[100],n,i,j,c=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        if(arr[0] !=0){
         for(j=0; j<arr[0]; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;}


        if(arr[0] == 0)
        {
            cout<<sr[0];
        }



        for(i=1; i<n; i++)
        {
            if(arr[i] < arr[i-1])
            {
                for(j=0; j<arr[i-1]; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;
            }
            else
            {
                for(j=0; j<arr[i]; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;

            }
            if(arr[i] == 0)
            {
                if(i%2 == 0)
                {
                    cout<<sr[0];
                }
                else
                {
                    cout<<sr[1];
                }
            }
        }

        for(j=0; j<arr[n-1]; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;

    }

    return 0;
}
