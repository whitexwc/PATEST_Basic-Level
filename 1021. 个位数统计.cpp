#include<iostream>
using namespace std;
int main()
{
    int k[10]={0},i=0,j=0,m=0;
    string n;
    cin>>n;
    while(n[i])
    {
        k[(n[i]-'0')]++;
        ++i;
    };
    for(j=0;j<10;j++)
    {
        if(k[j]>0) cout<<j<<':'<<k[j]<<endl;
    }
    return 0;
}
