#include<iostream>
#include<string>
using namespace std;
bool panduan(string s);
int main()
{
    int n,i=0;
    cin>>n;
    string *a=new string[n];
    bool *d=new bool[n];
    while(i<n)
    {
        cin>>a[i];
        d[i]=panduan(a[i]);
        ++i;
    }
    i=0;
    while(i<n)
    {
        if(d[i]==0) cout<<"NO\n";
        else cout<<"YES\n";
        ++i;
    }
    delete [] a;
    delete [] d;
}
bool panduan(string s)
{
        int k=0,len=0,m=0,p=0,t=0,h=0;//变量设太多，有点蠢啊。。
        for(k=0;s[k]!=NULL;k++)
        {
            ++len;
            if(s[k]=='P'||s[k]=='T'||s[k]=='A') ;
            else
                return false;
        }
        k=0;
        while(s[k])
        {
            if(s[k]=='P')
            {
                p=k+1;
                ++h;
            }
            else if(s[k]=='T')
            {
                t=k+1;
                ++h;
            }
            ++k;
        }
        if(h!=2||t<=p+1||p==0||t==0) return false;
        else
        {
            if(t-p==2) return true;
            else
            {
                if((p==1)&&(t==len)) return true;
                m=t-p-2;
                if(len-t-m*(p-1)>0) return true;
                else return false;
            }
        }
}
