#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,j;
    int k=0;
    cin>>m>>t;
    for(int i=0;i<m;i++)
    {
        j=i;
        while(j!=0)
        {
            if(j%10==t)
            {
                k++;
                break;
            }
            j=j/10;
        }
    }
    printf("%d",m-k);
    return 0;
}
