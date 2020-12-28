#include <iostream>
using namespace std;
int main()
{
    int n,m,a[105][105],h;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        for(m--;m>=0;m--)
        {
            for(int i=0;i<n-1;i++)
                {
                    cout<<a[i][m]<<" ";
                    h=i;
                }
            cout<<a[h+1][m]<<endl;
        }
    }
    return 0;
}
