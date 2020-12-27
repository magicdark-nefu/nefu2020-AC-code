#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,m,a[15][15];
    while(scanf("%d",&m)!=EOF)
    {
        num=0;
        for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<m;i++)
        num=num+a[i][i];
    for(int i=0;i<m;i++)
        num=num+a[i][m-i-1];
    cout<<num<<endl;
    }
    return 0;
}
