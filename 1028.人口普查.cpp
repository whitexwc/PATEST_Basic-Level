#include<cstdio>
struct people
{
    char name[6];
    int y,m,d;
}oldest,youngest,temp,left,right;
bool compare(people a,people b) //a>=b����1,�ȵ������յĴ�С��������С����1
{
    if(a.y!=b.y) return a.y>=b.y;
    else if(a.m!=b.m) return a.m>=b.m;
    else  return a.d>=b.d;
}
int main()
{
    int n,count=0;
    left.y=youngest.y=1814;
    left.m=youngest.m=9;
    left.d=youngest.d=6;
    right.y=oldest.y=2014;
    right.m=oldest.m=9;
    right.d=oldest.d=6;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d/%d/%d",temp.name,&temp.y,&temp.m,&temp.d);
        if(compare(temp,left)&&compare(right,temp))
        {
                if(compare(oldest,temp))    oldest=temp;
                if(compare(temp,youngest))  youngest=temp;
                count++;
        }
    }
    if(count==0) printf("0");//�����˶����ںϷ�����ʱ��ֱ�����0
    else
        printf("%d %s %s",count,oldest.name,youngest.name);
    return 0;
}
