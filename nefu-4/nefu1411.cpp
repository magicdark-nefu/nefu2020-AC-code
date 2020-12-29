#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,a,b,x,y,ans;
int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        ans=0;
        if(y%x!=0){printf("0\n");continue;}
        y=y/x;
        for(a=1;a*a<=y;a++)
        {
            if(y%a==0)
            {
                b=y/a;
                if(__gcd(a,b)==1)
                {
                    if(a*a==y)ans++;
                    else ans+=2;
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
