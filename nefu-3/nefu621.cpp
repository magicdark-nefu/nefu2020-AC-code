#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,m;
    char str[10000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        m=0;
        cin>>str;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]>='0'&&str[j]<='9')
                m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
