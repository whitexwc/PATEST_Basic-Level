#include<iostream>
using namespace std;
int main()
{
    int n,m,i=0,j=0,s;
    cin>>n;
    string *num=new string [n];
    int *a=new int [n];
    int *b=new int [n];
    for(;i<n;i++) cin>>num[i]>>a[i]>>b[i];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>s;
        for(j=0;j<n;j++) if(s==a[j]) cout<<num[j]<<' '<<b[j]<<endl;
    }
    delete [] num;
    delete [] a;
    delete [] b;
    return 0;
}
