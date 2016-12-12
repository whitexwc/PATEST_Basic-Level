#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sum1=0,sum2=0,sum3=0,sum4=0,a5=0,k=1,i=0,j=0,n;
    cin>>n;
    int *a=new int[n];
    for(;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%10==0) sum1+=a[i];
        else if(a[i]%5==1) {
            sum2+=k*a[i];
            k=-1*k;
        }
        else if(a[i]%5==2) sum3++;
        else if(a[i]%5==3) {sum4+=a[i];j++;}
        else if(a[i]%5==4) if(a[i]>a5) a5=a[i];
    }
    if(sum1!=0) cout<<sum1<<' ';
    else cout<<"N ";
    if(sum2!=0) cout<<sum2<<' ';
    else cout<<"N ";
    if(sum3!=0) cout<<sum3<<' ';
    else cout<<"N ";
    if(sum4!=0)
    {
        double ave=(double)sum4/(double)j;
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<ave<<' ';
    }
    else cout<<"N ";
    if(a5!=0) cout<<a5;
    else cout<<"N";
    delete [] a;
    return 0;
}
