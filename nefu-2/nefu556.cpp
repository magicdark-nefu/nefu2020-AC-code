#include <bits/stdc++.h>

using namespace std;
struct heshang{
char name[105];
int zongfeng;
};
bool cmp(heshang a,heshang b)
{
    return a.zongfeng<b.zongfeng;
}


int main()
{
    int n,i,m,o;
    heshang hs[1000];
    while(cin>>n>>m>>o)
    {
    for(i=0;i<n;i++)
        cin>>hs[i].name>>hs[i].zongfeng;
    sort(hs,hs+n,cmp);
    for(i=n-m;i<n;i++)
        cout<<hs[i].name<<endl;
    for(i=0;i<o;i++)
        cout<<hs[i].name<<endl;
    }
    return 0;
}
