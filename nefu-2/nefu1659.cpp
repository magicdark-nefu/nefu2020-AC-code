#include <bits/stdc++.h>

using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,k,a[1000],num=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<k;i++)
        num=num+a[i];
    cout<<num;
    return 0;
}
