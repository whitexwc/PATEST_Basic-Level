#include<cstdio>
int main()
{
    int a[55]={},n,pos=0,num_0=0,i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            a[pos++]=i;
        }
        if(i==0) num_0=n;
    }
    if(!num_0)
    {
        for(i=0;i<pos;i++)
            printf("%d",a[i]);
    }
    else
    {
        printf("%d",a[num_0]);
        for(i=0;i<pos;i++)
        {
            if(i!=num_0)
            {
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
