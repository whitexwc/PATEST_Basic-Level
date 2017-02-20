#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int sum[4]={0},a5=0,k=1,i=0,j=0,n;
    cin>>n;
    int *a=new int[n];
    for(;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%10==0) sum[0]+=a[i];
        else if(a[i]%5==1) {
            sum[1]+=k*a[i];
            k=-1*k;
        }
        else if(a[i]%5==2) sum[2]++;
        else if(a[i]%5==3) {sum[3]+=a[i];j++;}
        else if(a[i]%5==4) if(a[i]>a5) a5=a[i];
    }
    for(i=0;i<4;i++)
    {
        if(i==3)
        {
            double ave=(double)sum[3]/(double)j;
            if(sum[3]!=0)
                cout<<setiosflags(ios::fixed)<<setprecision(1)<<ave<<' ';
            else cout<<"N ";
        }
        else
        {
            if(sum[i]!=0) cout<<sum[i]<<' ';
            else cout<<"N ";
        }
    }
    if(a5!=0) cout<<a5;
    else cout<<"N";
    delete [] a;
    return 0;
}
