#include<iostream>
using namespace std;
int main()
{
    int n,ge,shi,bai,i=1;
    cin>>n;
    ge=n%10;
    n/=10;
    shi=n%10;
    n/=10;
    bai=n%10;
    while((bai--)>0) cout<<'B';
    while((shi--)>0) cout<<'S';
    while((ge--)>0)
    {
       cout<<i;
       ++i;
    }
}
