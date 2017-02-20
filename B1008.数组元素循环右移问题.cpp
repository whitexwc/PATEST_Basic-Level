#include<cstdio>
int main()
{
    int a[100];
    int n,m;
    scanf("%d%d",&n,&m);
    m=m%n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-m;i<n;i++)
        printf("%d ",a[i]);
    for(int i=0;i<n-m-1;i++)
        printf("%d ",a[i]);
    printf("%d",a[n-m-1]);
    return 0;
}
