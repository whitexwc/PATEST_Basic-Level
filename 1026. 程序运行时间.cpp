#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,h,m,s;
    float c1,c2;
    cin>>c1>>c2;
    n=int((c2-c1)/100+0.5);
    h=n/3600;
    m=(n-3600*h)/60;
    s=n-3600*h-60*m;
    cout<<setw(2)<<setfill('0')<<h<<':'<<setw(2)<<setfill('0')<<m<<':'<<setw(2)<<setfill('0')<<s<<endl;
}
