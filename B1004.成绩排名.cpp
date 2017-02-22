#include<cstdio>
struct Student
{
    char name[11];
    char num[11];
    int score;
};
int main()
{
    int n;
    Student temp,max,min;
    max.score=-1;
    min.score=101;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",temp.name,temp.num,&temp.score);
        if(temp.score>max.score) max=temp;
        if(temp.score<min.score) min=temp;
    }
    printf("%s %s\n",max.name,max.num);
    printf("%s %s",min.name,min.num);
    return 0;
}
