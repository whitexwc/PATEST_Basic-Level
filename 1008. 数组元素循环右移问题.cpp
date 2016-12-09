#include<iostream>
using namespace std;
struct c
{
    int data;
    c *next;
};
int main()
{
    c *head,*toe,*p1,*p2,*p,*p0,*head1;
    int n,m,i=0;
    cin>>n>>m;
    int *a=new int[n];
    for(;i<n;i++)   cin>>a[i];
    head=NULL;
    i=0;
    while(i<n)
    {
        p1=new c;
        p1->data=a[i];
        if(head==NULL)
            head=p2=p1;
        else
        {
            p2->next=p1;
            p2=p1;
        }
        ++i;
    }
    while(m>n) m-=n;
    if(m==n)
    {
        head1=head;
        for(i=0;i<n-1;i++)
        {
            cout<<head1->data<<' ';
            head1=head1->next;
        }
        cout<<head1->data;
    }
    else{
    p0=head;
    for(i=0;i<n-m-1;i++)
        p0=p0->next;
    p=p0->next;//记录断点处第一个值
    p0->next=NULL;//清除断点处尾指针
    p2->next=head;
    for(i=0;i<n-1;i++)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<p->data;
    }
}
