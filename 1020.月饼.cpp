#include<cstdio>
#include<algorithm>
using namespace std;
struct mooncake
{
    double store;
    double sum_price;
    double price;
}moon[1000];
bool cmp(mooncake a,mooncake b)
{
    return a.price>b.price;
}
int main()
{
    int N,D;
    double ans=0;
    scanf("%d %d",&N,&D);
    for(int i=0;i<N;i++)
    {
        scanf("%lf",&moon[i].store);
    }
    for(int i=0;i<N;i++)
    {
        scanf("%lf",&moon[i].sum_price);
        moon[i].price=moon[i].sum_price/moon[i].store;
    }
    sort(moon,moon+N,cmp);
    for(int i=0;i<N;i++)
    {
        if(D<=moon[i].store)
        {
            ans+=D*moon[i].price;
            break;
        }
        else
        {
            ans+=moon[i].sum_price;
            D-=moon[i].store;
        }
    }
    printf("%.2f",ans);
    return 0;

}
