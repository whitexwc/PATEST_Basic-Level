#include<cstdio>
int change(char c)
{
    if(c=='B') return 0;//���ַ��������ţ���������һ�ʤ����
    if(c=='C') return 1;
    if(c=='J') return 2;//��ֵΪ0ƽ�֣���ֵ��Ϊ-1����2���ж�Ϊ��
}
int main()
{
    int n,j[3]={},y[3]={},gesture_j[3]={},gesture_y[3]={},kj=0,ky=0;
    char gesture[3]={'B','C','J'};
    char a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        getchar();//����n����Ļس���
        scanf("%c %c",&a,&b);
        int sub=change(a)-change(b);
        if(!sub)
        {
            j[1]++;
            y[1]++;
        }
        else if(sub==-1||sub==2)
        {
            j[0]++;
            y[2]++;
            gesture_j[change(a)]++;
        }
        else
        {
            j[2]++;
            y[0]++;
            gesture_y[change(b)]++;
        }
    }
    printf("%d %d %d\n",j[0],j[1],j[2]);
    printf("%d %d %d\n",y[0],y[1],y[2]);
    for(int i=0;i<3;i++)
    {
        if(gesture_j[i]>gesture_j[kj]) kj=i;
        if(gesture_y[i]>gesture_y[ky]) ky=i;
    }
    printf("%c %c",gesture[kj],gesture[ky]);
    return 0;
}
