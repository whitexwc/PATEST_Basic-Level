#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,sum1=0,sum2=0,sum3=0,sum4=0,a5=0,k=1,i=0;
    while(a)
    {
        if(a%10==0) sum1+=a;
        else if(a%5==1) {
            sum2+=k*a;
            k=-1*k;
        }
        else if(a%5==2) sum3+=1;
        else if(a%5==3) {sum4+=a;i++;}
        else if(a%5==4) if(a>a5) a5=a;
    }
    if(sum1!=0) cout<<sum1<<' ';
    else cout<<"N ";
    if(sum2!=0) cout<<sum2<<' ';
    else cout<<"N ";
    if(sum3!=0) cout<<sum3<<' ';
    else cout<<"N ";
    if(sum4!=0)
    {
        double ave=(double)a/(double)i;
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<ave<<' ';
    }
    else cout<<"N ";
    if(a5!=0) cout<<a5;
    else cout<<"N ";
    return 0;



}
