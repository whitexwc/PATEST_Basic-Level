#include<iostream>
#include<string>
using namespace std;
int main()
{
    string nu[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int wei[5],i=0,j=4,sum=0;
    string n;
    cin>>n;
    while(n[i])
    {
        sum+=(n[i]-'0');
        ++i;
    }
    if(sum==0)
    {
        wei[j]=sum%10;
        --j;
    }
    while(sum>0)
    {
        wei[j]=sum%10;
        sum/=10;
        --j;
    }
    ++j;
    while(j<=4)
    {
        if(j==4)
            cout<<nu[wei[j]];
        else
            cout<<nu[wei[j]]<<' ';
        ++j;
    }
}
