#include<iostream>
#include<string.h>
using namespace std;
struct student{
    string num;
    string name;
    int score;
};
int main()
{
    int n,i=0,a=0,b=0;
    cin>>n;
    student* stu=new student [n];
    while(i<n)
    {
        cin>>stu[i].name;
        cin>>stu[i].num;
        cin>>stu[i].score;
        ++i;
    }
    i=0;
    while(i<n)
    {
        if(stu[i].score>stu[a].score) a=i;
        ++i;
    }
    i=0;
    while(i<n)
    {
        if(stu[i].score<stu[b].score) b=i;
        ++i;
    }
    cout<<stu[a].name<<' '<<stu[a].num<<endl;
    cout<<stu[b].name<<' '<<stu[b].num;
    delete [] stu;
    return 0;
}
