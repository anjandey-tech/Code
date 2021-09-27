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
for(int j=0;j<2*(n-i)-1;j++)
{
    cout<<'*';
}

cout<<endl;
}

}
/*

           *******
            *****
             ***
              *
*/