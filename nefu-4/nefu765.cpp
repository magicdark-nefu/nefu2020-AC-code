#include <bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,res;
    int num[15];
    int gcd (int a,int b);
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n,cmp);
        res=num[0];
        for(int i=1;i<n;i++)
            res=lcm(res,num[i]);
        cout<<res<<endl;

    }
    return 0;
}
