#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float c1,c2;
    cin>>c1>>c2;
    n=int((c2-c1)/100+0.5);
    cout<<setw(2)<<setfill('0')<<n/3600<<':'<<setw(2)<<setfill('0')<<n%3600/60<<':'<<setw(2)<<setfill('0')<<n%60<<endl;
}
