#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,a1,a2,b1,b2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a1>>a2>>b1>>b2;
        if(a2==a1+b1&&b2==a1+b1) ;
        else if(a2==a1+b1) b++;
        else if(b2==a1+b1) a++;
    }
    cout<<a<<' '<<b;
    return 0;
}
