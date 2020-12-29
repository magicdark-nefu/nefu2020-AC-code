#include <bits/stdc++.h>

using namespace std;
int m,n;
struct zuobiao
{
    int hengzhuobiao;
    int zhongzuobiao;
};
bool cmp(zuobiao a,zuobiao b)
{
    if(m==1)
    {
        if(a.hengzhuobiao!=b.hengzhuobiao)
            return a.hengzhuobiao<b.hengzhuobiao;
        else
            if(n==1)
                return a.zhongzuobiao<b.zhongzuobiao;
            else
                return a.zhongzuobiao>b.zhongzuobiao;
    }
    else
    {
        if(a.hengzhuobiao!=b.hengzhuobiao)
            return a.hengzhuobiao>b.hengzhuobiao;
        else
            if(n==1)
                return a.zhongzuobiao<b.zhongzuobiao;
            else
                return a.zhongzuobiao>b.zhongzuobiao;
    }
}
int main()
{
    int x,i;
    zuobiao zb[100];
    while(cin>>m>>n>>x)
    {

        for(i=0;i<x;i++)
            cin>>zb[i].hengzhuobiao>>zb[i].zhongzuobiao;
        sort(zb,zb+x,cmp);
        for(i=0;i<x;i++)
            cout<<"("<<zb[i].hengzhuobiao<<","<<zb[i].zhongzuobiao<<")"<<endl;
    }
    return 0;
}
