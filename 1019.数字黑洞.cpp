#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
void to_array(int a,int num[])
{
    for(int i=0;i<4;i++)
    {
        num[i]=a%10;
        a/=10;
    }
}
int to_int(int a[])
{
    int ans=0;
    for(int i=0;i<4;i++)
    {
       ans=ans*10+a[i];
    }
    return ans;
}
int main()
{
    int n,max,min;
    int num[4];
    scanf("%d",&n);
    while(1)
    {
        to_array(n,num);
        sort(num,num+4,cmp);
        max=to_int(num);
        sort(num,num+4);
        min=to_int(num);
        n=max-min;
        printf("%04d - %04d = %04d\n",max,min,n);
        if(n==0||n==6174)
        {
            break;
        }
    }
    return 0;

}
