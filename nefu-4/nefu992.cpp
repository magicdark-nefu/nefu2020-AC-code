#include <bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int a,b;
    int gcd (int a,int b);
    while(cin>>a>>b)
    {
        for(int i=2;1;i++)
        {
            if(gcd((a/b),i)==1)
            {
                cout<<b*i<<endl;
                break;
            }
        }
    }
    return 0;
}
