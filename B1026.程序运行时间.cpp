#include<cstdio>
int main()
{
    int c1,c2,ans;
    scanf("%d%d",&c1,&c2);
    if((c2-c1)%100>=50)
        ans=(c2-c1)/100+1;
    else
        ans=(c2-c1)/100;
    printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
}
