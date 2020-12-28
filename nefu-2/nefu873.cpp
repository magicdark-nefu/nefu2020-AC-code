#include <bits/stdc++.h>
using namespace std;
struct str1{
char name[25];
double zy;
double dy;
double wy;
double zf;
};
bool cmp(str1 a,str1 b)
{
    if(a.zf!=b.zf)
        return a.zf>b.zf;
    else if(a.zy!=b.zy)
        return a.zy>b.zy;
    else if(a.dy!=b.dy)
        return a.dy>b.dy;
    else
        return a.wy>b.wy;
}
int main()
{
    int t,n;
    double a,b,c;
    str1 hero[1000];
    cin>>t;//(1<=t<=1000)
    for(int i=0;i<t;i++)
    {
        cin>>n>>a>>b>>c;//(1<=n<=100000)
        for(int j=0;j<n;j++)
            cin>>hero[j].name>>hero[j].zy>>hero[j].dy>>hero[j].wy;
        for(int j=0;j<n;j++)
        {
            hero[j].dy=hero[j].dy*a/100.0;
            hero[j].zy=hero[j].zy*b/100.0;
            hero[j].wy=hero[j].wy*c/100.0;
        }
        for(int j=0;j<n;j++)
            hero[j].zf=hero[j].zy+hero[j].dy+hero[j].wy;
        sort(hero,hero+n,cmp);
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int p=0;p<n;p++)
            printf("%s %.4lf %.4lf %.4lf %.4lf\n",hero[p].name,hero[p].zf,hero[p].zy,hero[p].dy,hero[p].wy);

    }
    return 0;
}
