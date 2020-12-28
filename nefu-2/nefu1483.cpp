#include <bits/stdc++.h>

using namespace std;
struct student{
char name[25];
int grade;
};
bool cmp(student a,student b)
{
    if(a.grade!=b.grade)
        return a.grade>b.grade;
    else
        return a.name<b.name;
}

int main()
{
    student stu[25];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].grade;
    }
    sort(stu,stu+n,cmp);
    for(i=0;i<n;i++)
        cout<<stu[i].name<<" "<<stu[i].grade<<endl;
    return 0;
}
