#include <bits/stdc++.h>
using namespace std;
struct node
{
    string name,h,num;
}p[101];
bool cmp(node a,node b)
{
    if(a.h!=b.h)return a.h>b.h;
    else return a.num<b.num;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>p[i].name>>p[i].h>>p[i].num;
    sort(p,p+n,cmp);
    printf("%s %s %s\n",p[0].name.c_str(),p[0].h.c_str(),p[0].num.c_str());
    return 0;
}

