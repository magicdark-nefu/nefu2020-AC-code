#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,value[15][15],num;
    while(cin>>n>>m)
    {
        num=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cin>>value[i][j];
        for(int i=0;i<n;i++)
            num=num+value[i][0];
        for(int i=0;i<n;i++)
            num=num+value[i][m-1];
        for(int i=0;i<n;i++)
            num=num+value[0][i];
        for(int i=0;i<n;i++)
            num=num+value[n-1][i];
        num=num-value[0][0]-value[0][m-1]-value[n-1][0]-value[n-1][m-1];
        cout<<num<<endl;
    }
    return 0;
}
