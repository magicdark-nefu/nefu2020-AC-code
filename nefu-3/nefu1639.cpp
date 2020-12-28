#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,num[105],b=0;
    int num1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    cin>>num1;
    for(int i=0;i<n;i++)
    {
        if(num1==num[i])
        {
            cout<<i+1;
            b++;
            break;
        }
    }
    if(b==0)
        cout<<0;
    return 0;
}
