#include<cstdio>
int main()
{
    int T,n=1;
    long long int a,b,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c)
            printf("Case #%d: true\n",n);
        else
            printf("Case #%d: false\n",n);
        n++;
    }
    return 0;
}
