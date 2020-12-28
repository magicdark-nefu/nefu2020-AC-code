#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[105],k;
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            cin>>k;
            a[k]++;
        }
        sort(a,a+101);
        cout<<a[100]<<endl;
    }
    return 0;
}
