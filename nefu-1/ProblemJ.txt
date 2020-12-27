#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct student{
    char name[20];
    char num[15];
    double grade;};
    student stu[15];
    student stu1[15];
    int n,k,i;
    while(cin>>n)
    {
        k=0;
        for(i=0;i<n;i++)
        {
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            cin.get(stu[i].name,20);
            cin>>stu[i].num;
            cin>>stu[i].grade;
        }
        for(i=0;i<n;i++)
        {
            if(stu[i].grade<60)
            {
                strcpy(stu1[k].name,stu[i].name);
                strcpy(stu1[k].num,stu[i].num);
                stu1[k].grade=stu[i].grade;
                k++;
            }
        }
        if(k==0)
        {
            cout<<"They are Great!!"<<endl;
        }
        else
        {
            cout<<k<<endl;
            for(i=0;i<k;i++)
        {
            cout<<stu1[i].name<<endl;
        }
        for(i=0;i<k;i++)
        {
            cout<<stu1[i].num<<endl;
        }
        for(i=0;i<k;i++)
        {
            printf("%.2lf\n",stu1[i].grade);
        }


        }
    }
    return 0;
}
