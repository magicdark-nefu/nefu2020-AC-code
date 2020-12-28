#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5900];
    a[1]=1;
    int n,i,p2=1,p3=1,p5=1,p7=1;
    for(i=2;i<5860;i++)
    {
        a[i]=min(min(a[p2]*2,a[p3]*3),min(a[p5]*5,a[p7]*7));
        if(a[i]/a[p2]==2) p2++;
        if(a[i]/a[p3]==3) p3++;
        if(a[i]/a[p5]==5) p5++;
        if(a[i]/a[p7]==7) p7++;
    }
    while(cin >> n&&n)
        printf("%d\n",a[n]);
    return 0;
}
