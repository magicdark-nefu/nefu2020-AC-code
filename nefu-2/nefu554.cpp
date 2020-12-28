#include <bits/stdc++.h>

using namespace std;
struct heshang{
int cyuyan;
int xiandai;
int gaoshu;
int yingyu;
int zongfeng;
int xuhao;};
bool cmp(heshang a,heshang b)
{
    if(a.zongfeng!=b.zongfeng)
        return a.zongfeng>b.zongfeng;
    else if(a.cyuyan!=b.cyuyan)
        return a.cyuyan>b.cyuyan;
    else if(a.xiandai!=b.xiandai)
        return a.xiandai>b.xiandai;
    else if(a.gaoshu!=b.gaoshu)
        return a.gaoshu>b.gaoshu;
    else if(a.yingyu!=b.yingyu)
        return a.yingyu>b.yingyu;
    else
        return a.xuhao>b.xuhao;
}

int main()
{
    int n,i;
    heshang hs[105];
    while(cin>>n)
    {
    for(i=0;i<n;i++)
        {cin>>hs[i].cyuyan>>hs[i].xiandai>>hs[i].gaoshu>>hs[i].yingyu;
        hs[i].xuhao=i+1;}
    for(i=0;i<n;i++)
        hs[i].zongfeng=hs[i].cyuyan+hs[i].xiandai+hs[i].gaoshu+hs[i].yingyu;
    sort(hs,hs+n,cmp);
    for(i=0;i<n;i++)
        cout<<hs[i].xuhao<<" "<<hs[i].zongfeng<<endl;
    }
    return 0;
}
