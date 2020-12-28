#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int a[505],b[505];
    k=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            b[k]=a[i];
            k++;
        }
    }
    sort(b,b+k);
    for(int i=0;i<k;i++)
    {

        if(i==k-1)
            cout<<b[i];
        else
            cout<<b[i]<<",";
    }
    return 0;
}
