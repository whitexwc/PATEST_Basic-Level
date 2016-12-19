#include<iostream>
using namespace std;
int main()
{
    float n;
    int i=0,j=0,r;
    char c;
    cin>>n>>c;
    r=int(0.5*n+0.5);
    for(;i<r;i++)
    {
        if(i==0||i==r-1)
        {
            for(j=0;j<n;j++) cout<<c;
            cout<<endl;
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(j==0||j==n-1) cout<<c;
                else cout<<' ';
            }
            cout<<endl;
        }
    }
}
