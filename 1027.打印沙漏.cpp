#include<cstdio>
#include<cmath>
int main()
{
    int N;
    char c;
    scanf("%d %c",&N,&c);
    int x=(int) sqrt(2.0*(1+N))-1;
    if(x%2==0) x-=1;
    else ;
    for(int i=x;i>=1;i-=2)
    {
        for(int j=0;j<(x-i)/2;j++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++) printf("%c",c);
        printf("\n");
    }
    for(int i=3;i<=x;i+=2)
    {
        for(int j=0;j<(x-i)/2;j++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++) printf("%c",c);
        printf("\n");
    }
    printf("%d",N-(1+x)*(1+x)/2+1);
    return 0;
}
