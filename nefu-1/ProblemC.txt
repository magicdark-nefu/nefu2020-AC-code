#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,num,tmp,a[15][15];
    while(cin>>m>>n)
    {
        tmp=-1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(i==0)
                {
                    if(j==0)
                    {
                        num=a[i][j]+a[i+1][j]+a[i][j+1];
                        if(tmp<num)
                            tmp=num;
                    }
                    else if(j==n-1)
                    {
                        num=a[i][j]+a[i+1][j]+a[i][j-1];
                        if(tmp<num)
                            tmp=num;
                    }
                    else
                    {
                        num=a[i][j]+a[i][j+1]+a[i][j-1]+a[i+1][j];
                        if(tmp<num)
                            tmp=num;
                    }
                }
                else if(i==m-1)
                {
                    if(j==0)
                    {
                        num=a[i][j]+a[i-1][j]+a[i][j+1];
                        if(tmp<num)
                            tmp=num;
                    }
                    else if(j==n-1)
                    {
                        num=a[i][j]+a[i-1][j]+a[i][j-1];
                        if(tmp<num)
                            tmp=num;
                    }
                    else
                    {
                        num=a[i][j]+a[i][j+1]+a[i][j-1]+a[i-1][j];
                        if(tmp<num)
                            tmp=num;
                    }
                }
                else if(j==0)
                {
                    num=a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1];
                    if(tmp<num)
                        tmp=num;
                }
                else if(j==n-1)
                {
                    num=a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1];
                    if(tmp<num)
                        tmp=num;
                }
                else
                {
                    num=a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1];
                     if(tmp<num)
                        tmp=num;
                }
            }
        cout<<tmp<<endl;

    }
    return 0;
}
