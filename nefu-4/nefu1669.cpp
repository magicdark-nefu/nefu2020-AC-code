#include <bits/stdc++.h>
using namespace std;
int gcd(long long a,long long  b)
{
    if(b==0) return a;
    else return(gcd(b,a%b));
}
int main()
{
    long long x,y;
    int a1,a2,m;
    int gcd(long long a,long long  b);
    while(cin>>x>>y)
    {
        m=0;
        a1=gcd(x,y);
        a2=sqrt(a1);
        for(int i=1;i<=a2;i++)
        {
            if(a1%i==0)
            {
                m++;
            }
        }
        m=m*2;
        if(a2*a2==a1)
        {
            m--;
        }
        cout<<m<<endl;
    }
    return 0;
}
