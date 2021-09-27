#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int res = i;
while(res--)
{
    cout<<" ";
}
int k= 2*(n-i)-1;
for(int j=0;j<k;j++)
{
    if(i==0 or i == n-1)
    cout<<'*';

    else if( i >0 and i<n-1)
    {
        if(j==0 or j == k-1)
        {
            cout<<'*';
        }
        else
        cout<<" ";

    }
}

cout<<endl;
}

}
/*

           *******
            *   *
             * *
              *
*/