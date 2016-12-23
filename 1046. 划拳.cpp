#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    int *a1=new int [n];
    int *a2=new int [n];
    int *b1=new int [n];
    int *b2=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i]>>b1[i]>>b2[i];
        if(a2[i]==a1[i]+b1[i]&&b2[i]==a1[i]+b1[i]) ;
        else if(a2[i]==a1[i]+b1[i]) b++;
        else if(b2[i]==a1[i]+b1[i]) a++;
    }
    cout<<a<<' '<<b;
}
