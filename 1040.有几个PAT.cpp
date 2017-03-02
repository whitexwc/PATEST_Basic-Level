#include<cstdio>
#include<cstring>
const int maxn=100005;
const int mod=1000000007;
int main()
{
    char str[maxn];
    int num_p[maxn]={};
    int T=0,ans=0,len;
    gets(str);
    len=strlen(str);
    if(str[0]=='P')
            num_p[0]=1;
    else ;
    for(int i=1;i<len;i++)
    {
        if(str[i]=='P')
            num_p[i]=num_p[i-1]+1;
        else
            num_p[i]=num_p[i-1];
    }
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]=='T')
            T++;
        if(str[i]=='A')
            ans=(ans+T*num_p[i])%mod;
    }
    printf("%d",ans);
    return 0;
}
