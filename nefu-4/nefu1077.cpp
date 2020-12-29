#include <bits/stdc++.h>
using namespace std;

int gcd (int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int x,y;
    int gcd (int a,int b);
    while(cin>>x>>y)
    {
        cout<<gcd(x,y)<<" "<<x/gcd(x,y)*y<<endl;
    }
    return 0;
}
