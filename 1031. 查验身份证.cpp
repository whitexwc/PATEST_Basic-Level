#include<iostream>
using namespace std;
bool check(string a)
{
    char m[]={'1','0','X','9','8','7','6','5','4','3','2'};
    int q[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int i=0,sum=0,z;
    for(;i<17;i++) 
    {
        if(a[i]-'0'>9||a[i]-'0'<0) 
            return false;
        else 
            sum+=(a[i]-'0')*q[i];
    }
    z=sum%11;
    if(a[17]==m[z]) return true;
    else return false;
}
int main()
{
    int n,i=0,k=0;
    cin>>n;
    string *a=new string [n];
    for(;i<n;i++)
    {
        cin>>a[i];
        if(check(a[i])) ++k;
        else cout<<a[i]<<endl;
    }
    if(k==n) cout<<"All passed";
    delete [] a;
    return 0;
}
