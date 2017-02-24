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
//一开始由于忽略了用int型会超出内存溢出，导致程序数字只要稍微大一点，都会出错
//后来使用了string后，忘记删除测试输出了，使得结果错误，
//最后由于忽略了最后输出无空格，再次格式错误，一定要注意题目要求
