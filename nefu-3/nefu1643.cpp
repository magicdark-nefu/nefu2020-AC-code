#include <bits/stdc++.h>

using namespace std;

int main()
{
    int gys(int a,int b);
    double A,B,L;
    cin >> A >> B >> L ;
    double a,b;
    int A_final,B_final,i;
    double x;
    x=A/B;
    double t=1000;
    for(a=1;a<=L;a++)
    {
        for(b=1;b<=L;b++)
        {
            double y=double(a/b);
            if(y>=x&&y-x<t)
            {
                A_final=a;
                B_final=b;
                t=y-x;
            }
        }
    }
    i=gys(A_final,B_final);
    A_final/=i;B_final/=i;
    cout << A_final << " " << B_final << endl ;
    return 0;
}

int gys(int a,int b)//求最大公约数
{
    return b?gys(b,a%b):a;
}
