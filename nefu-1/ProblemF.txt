#include <iostream>
#include <cstdio>
using namespace std;
struct student
{
    char num[10],name[30];
    double score;
};
int main()
{
    int n,i;
    while(scanf("%d",&n)!=-1)
    {
        student stu[100];
        getchar();
        for(i=1;i<=n;i++)
        scanf("%s %[^\n] %lf",stu[i].num,stu[i].name,&stu[i].score);
        for(i=1;i<=n;i++)
        printf("%s  %s  %.2lf\n",stu[i].num,stu[i].name,stu[i].score);
    }
    return 0;
}
