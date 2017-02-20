#include<cstdio>
int main()
{
    long long int a,da,b,db,pa=0,pb=0;
    scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
    while(a)
    {
        if((a%10==da))
            pa=pa*10+da;
        a/=10;
    }
    while(b)
    {
        if((b%10==db))
            pb=pb*10+db;
        b/=10;
    }
    printf("%lld",pa+pb);
    return 0;
}
