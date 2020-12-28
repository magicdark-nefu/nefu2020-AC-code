#include <bits/stdc++.h>
using namespace std;
struct str{
int x1;
int x2;
int y1;
int y2;};
int main()
{
    int i,n,i1,i2,m,p;
    str mmp[1000];
    while(cin>>n)
    {
        m=p=0;
        for(i=0;i<n;i++)
            cin>>mmp[i].x1>>mmp[i].x2>>mmp[i].y1>>mmp[i].y2;
        for(i1=0;i1<n;i1++)
        {
            for(i2=0;i2<n;i2++)
            {   if(mmp[i1].x1==mmp[i2].x1&&mmp[i1].y1==mmp[i2].y1&&mmp[i1].x2==mmp[i2].x2&&mmp[i1].y2==mmp[i2].y2)
                    p++;
                else if(mmp[i1].x1<=mmp[i2].x1&&mmp[i1].y1<=mmp[i2].y1&&mmp[i1].x2>=mmp[i2].x2&&mmp[i1].y2>=mmp[i2].y2)
                   m++;

            }
            if(p>1)
            {
                m++;
            }
            p=0;
        }
            m=m;
            cout<<m<<endl;

    }
    return 0;
}
