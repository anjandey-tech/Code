 /*

              *
             **
            ***
           ****
            ***
             **
              *
*/
#include<bits/stdc++.h>
using namespace std;
void printhalfdiamond(int n)
{
    for(int i=1;i<=2*n;i++)
{     int res = abs(n -i);
while(res--)
{
    cout<<" ";
}
     int k;
    if(i<=n)
     k = i;
    else
    {
        k=2*n-i;
    }
    for(int j=0;j<k;j++)
    {
         cout<<'*';
    }
    cout<<endl;
}

}
int main()
{
int n=5;
printhalfdiamond(n);
cout<<endl;
}