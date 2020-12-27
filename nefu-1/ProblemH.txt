#include <bits/stdc++.h>
using namespace std;
string flag,level;
int n,i,cnt,sum,mark;
int main()
{
    cin>>n;
    cnt=sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>flag;
        if(flag=="C")
        {cin>>level;cnt++;}
        else
        {cin>>mark;sum=sum+mark;}
    }
    printf("%d %d\n",cnt,sum/(n-cnt));
    return 0;
}
