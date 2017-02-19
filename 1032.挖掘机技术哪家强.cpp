#include<cstdio>
const int maxn=100000;
int main()
{
    int n,num,score,sum[maxn]={},maxsum,maxnum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&num,&score);
        sum[num-1]+=score;
    }
    maxsum=0;
    for(int i=0;i<n;i++)
    {
        if(sum[i]>maxsum)
        {
            maxsum=sum[i];
            maxnum=i+1;
        }
    }
    printf("%d %d",maxnum,maxsum);
    return 0;
}
