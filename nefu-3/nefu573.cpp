#include <bits/stdc++.h>

using namespace std;
int main()
{
    int k,a[55],i1,i2,i3,i4,i5,i6;
    while(cin>>k)
    {
        if(k==0)
            break;
        else
        {
            for(int i=1;i<=k;i++)
                cin>>a[i];
            for(i1=1;i1<=k-5;i1++)
            {
                for(i2=i1+1;i2<=k-4;i2++)
                {
                    for(i3=i2+1;i3<=k-3;i3++)
                    {
                        for(i4=i3+1;i4<=k-2;i4++)
                        {
                            for(i5=i4+1;i5<=k-1;i5++)
                            {
                                for(i6=i5+1;i6<=k;i6++)
                                    printf("%d %d %d %d %d %d\n",a[i1],a[i2],a[i3],a[i4],a[i5],a[i6]);
                            }
                        }
                    }
                }
            }
        }

    }
    return 0;
}
