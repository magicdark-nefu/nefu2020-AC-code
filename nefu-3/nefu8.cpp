#include <bits/stdc++.h>

using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,i,a[20],m,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        h=0;
        for(m=0;1;m++)
        {
            cin>>a[m];
            if(a[m]==0)
                break;
        }
        sort(a,a+m,cmp);
        for(int j=0;j<m-1;j++)
            for(int k=j+1;k<m;k++)
        {
            if(a[j]==(a[k]*2))
                h++;
        }
        cout<<h<<endl;

    }
    return 0;
}
