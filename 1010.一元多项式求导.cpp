#include<cstdio>
int main()
{
    int n[1010]={},a,b,count=0;
    while(scanf("%d %d",&a,&b)!=EOF)
        n[b]=a;
    for(int i=1;i<=1000;i++)
    {
        n[i-1]=i*n[i];
        n[i]=0;
        if(n[i-1]) count++;
    }
    if(count==0) printf("0 0");
    else
    {
        for(int i=1000;i>=0;i--)
        {
            if(n[i])
            {
                printf("%d %d",n[i],i);
                count--;
                if(count!=0) printf(" ");
            }

        }
    }
    return 0;
}
