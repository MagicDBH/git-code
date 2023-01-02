#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int n,t1=0,t2=0,t3=0;
    char a[1001],b[1001],c[1000];  //定义数组，分别用来存放字母，数字，问号（其实问号可以忽略）
    scanf("%d",&n);
    scanf("%s",str);
for (int i = 0; i <n; i++)          //模板所给，判断str数组中的元素的类型
   {
    char ch=str[i];
    if(ch>='A'&&ch<='Z')
    {
        a[t1]=ch;
        t1++;
    }
    else if(ch>='0'&&ch<='9')
    {
        b[t2]=ch;
        t2++;
    }
    else if(ch=='?')
    {
        c[t3]=ch;
        t3++;
    }
   }
   for(int j=0;j<t1;j++)          //在自己所定义的数组中排顺序
for(int i=0;i<t1-1-j;i++)
{
    char t;
    if(a[i]>=a[i+1])
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
}
for(int j=0;j<t2;j++)                // //同，排顺序
for(int i=0;i<t2-j-1;i++)
{
    char t;
    if(b[i]<=b[i+1])
    {
        t=b[i];
        b[i]=b[i+1];
        b[i+1]=t;
    }
    
}
int d1=0,d2=0;        
for(int i=0;i<n;i++)             //！！！！！！！利用第一个记录元素的模板，将记录的元素放回str数组中！！！！！！！！！！！
{ 
    char ch=str[i];
    if(ch>='A'&&ch<='Z')
    {
        str[i]=a[d1];          
        d1++;
    }
    else if(ch>='0'&&ch<='9')
    {
        str[i]=b[d2];
        d2++;
    }
    else if(ch=='?')
    {
        str[i]='?';
    }
}
    printf("%s",str);
}