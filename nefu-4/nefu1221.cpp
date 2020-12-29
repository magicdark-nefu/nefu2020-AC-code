#include <bits/stdc++.h>
using namespace std;
long long  gcd(long long a,long long  b)
{
    if(b==0) return a;
    else return(gcd(b,a%b));
}
int main()
{
    long long a,b,t;
    while(scanf("%lld",&t)!=EOF)
    {
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",(a*a-(b*gcd(a,b)*2)));
    }
    }
    return 0;
}
