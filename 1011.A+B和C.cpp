<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long long int *a=new long long int [n];
    long long int *b=new long long int [n];
    long long int *c=new long long int [n];
    int *flag=new int [n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]+b[i]>c[i]) flag[i]=1;
        else flag[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(flag[i]==1) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    delete [] a;
    delete [] b;
    delete [] c;
    delete [] flag;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a+b>c) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
>>>>>>> origin/master
