#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,len[1005],a1,a2,b;
    b=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>len[i];
    for(int i=0;i<n;i++)
     {
         a1=a2=0;
        for(int j=0;j<n;j++)
    {
        if(i==j)
            continue;
        else
        {
            if(len[i]<len[j])
            {
                if(i>j)
                    a1++;
                else
                    a2++;
            }

        }

    }
    if(a1==a2)
        b++;
    }
    cout<<b;
    return 0;
}
