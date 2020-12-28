#include <bits/stdc++.h>
using namespace std;
struct student{
    int num;
    double chengji;
    } stu[105];
        bool cmp(student a,student b)
    {
        return a.chengji > b.chengji;
    }

int main()
{

    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>stu[i].num>>stu[i].chengji;
    sort(stu,stu+n,cmp);
    cout<<stu[k-1].num<<" ";
    printf("%g",stu[k-1].chengji);

    return 0;
}
