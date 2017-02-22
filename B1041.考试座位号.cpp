#include<cstdio>
const int maxn=1010;
struct Student{
    long long id;
    int examSeat;
}stu[maxn];
int main()
{
    int n,m,seat,examSeat;
    long long id;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %d %d",&id,&seat,&examSeat);
        stu[seat].id=id;
        stu[seat].examSeat=examSeat;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&seat);
        printf("%lld %d\n",stu[seat].id,stu[seat].examSeat);
    }
    return 0;
}
