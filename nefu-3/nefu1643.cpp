#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)return x;
    else
    return gcd(y,x%y);
}
int main()
{
    double a,b;
    int l,a1,b1;
    double zuida=9999999;
    while(cin>>a>>b>>l)
    {
       zuida=999999;
       for(double i=1;i<=l;i++)
       for(double j=1;j<=l;j++)
       {
           if(i/j>=a/b&&zuida>i/j-a/b)
           {
               zuida=i/j-a/b;
               a1=i;
               b1=j;
           }
       }
       a1=a1/gcd(a1,b1);
       b1=b1/gcd(a1,b1);
       cout<<a1<<" "<<b1<<endl;
    }


