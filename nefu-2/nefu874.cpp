#include <bits/stdc++.h>
using namespace std;
struct str{
char name[25];
int time[4];
int times[4];
int ac;
int ztime;};
bool cmp(str a,str b)
{
    if(a.ac!=b.ac)
        return a.ac>b.ac;
    else
        return a.ztime<b.ztime;
}
int main()
{
    int n,i;
    str team[1000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>team[i].name>>team[i].time[0]>>team[i].time[1]>>team[i].time[2];
        for(i=0;i<n;i++)
            for(int j=0;j<3;j++)
            cin>>team[i].times[j];
        for(i=0;i<n;i++)
        {
            team[i].ac=0;
            team[i].ztime=0;
            for(int j=0;j<3;j++)
            {
                if(team[i].time[j]!=-1)
                {
                    team[i].ac++;
                    team[i].ztime=team[i].ztime+team[i].time[j]+20*(team[i].times[j]-1);
                }
            }
        }
        sort(team,team+n,cmp);
        for(i=0;i<n;i++)
            cout<<team[i].name<<" "<<team[i].ac<<" "<<team[i].ztime<<endl;
    }
    return 0;
}
