#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int a)
{
    int i,k;
    k=(int)sqrt(a);
    for(i=2;i<=k;i++)
        if(a%i==0) return false;
    return true;
}
int main()
{
    int m,n,i=2,j=0,k=0;
    cin>>m>>n;
    while(1)
    {
        if(isprime(i))
        {
            ++j;
            if(j>=m&&j<n)
            {
                ++k;
                if(k%10!=0) cout<<i<<' ';
                else cout<<i<<endl;
            }
            if(j==n) cout<<i;
        }
        ++i;
        if(j>n) break;
    }
    return 0;
}
