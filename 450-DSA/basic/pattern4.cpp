/*

               
            *
           ***
          *****
         ******* 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; //4
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int res = i+1;
        res = n - res;
        while(res--)
        {
            cout<<" ";
        }
        for(int j=0;j<i*2+1;j++)
        {
          cout<<'*';   
        }
        cout<<endl;
    }
}