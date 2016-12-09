#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int i=0,j,len,p;
    getline(cin,s);
    len=s.length();
    p=len-1;
    for(i=p;i>0;i--)
    {
        if(s[i]==' ')
        {
            for(j=i+1;j<=p;j++)
                cout<<s[j];
            cout<<' ';
            p=i-1;
        }
    }
    for(i=0;i<=p;i++) cout<<s[i];
    return 0;
}
