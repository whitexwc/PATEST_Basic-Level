#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int k[10]={0},i=0,j=0,m=0;
    string n;
    cin>>n;
    while(n[i])
    {
        for(j=0;j<10;j++)
            if(n[i]-'0'==a[j]) k[j]++;
        ++i;
    }
    for(j=0;j<10;j++)
    {
        if(k[j]>0) cout<<a[j]<<':'<<k[j]<<endl;
    }
    return 0;
}
