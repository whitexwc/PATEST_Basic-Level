#include<cstdio>
int main()
{
    int a,b,d,n,ans[30],i=0;
    scanf("%d%d%d",&a,&b,&d);
    n=a+b;
    do
    {
        ans[i++]=n%d;
        n/=d;
    }while(n!=0);
    while(i>0)
    {
        printf("%d",ans[i-1]);
        --i;
    }
}
