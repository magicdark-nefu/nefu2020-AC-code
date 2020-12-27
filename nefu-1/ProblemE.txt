#include <stdio.h>
#include <string.h>
int n,a[20][20],b[20][20],ans[20][20];
int main()
{
    while(scanf("%d",&n)!=-1)
    {
        memset(ans,0,sizeof(ans));//记得初始化！
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                scanf("%d",&b[i][j]);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                for(int k=1;k<=n;k++)
                    ans[i][j]=ans[i][j]+a[i][k]*b[k][j];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                j==n?printf("%d\n",ans[i][j]):printf("%d ",ans[i][j]);
    }
    return 0;
}
