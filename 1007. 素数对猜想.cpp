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
    int num=0,n,i;
    cin>>n;
    for(i=4;i<=n;i++)
    {
        if(isprime(i)&&isprime(i-2)) num++;
    }
    cout<<num;
}
