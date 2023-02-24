//冒泡排序
//然而还是不会用
#include<stdio.h>
int main()
{
    int a[100];
    int ad;
    int i,j,b,c,d,n;
    scanf("%d",&n);      //输入所排序数据的个数（可忽略）
    for(b=0;b<n;b++)
    scanf("%d",&a[b]);
    for(j=0;j<n;j++)    //第j趟比较
     for(i=0;i<n-j-1;i++) //第j趟比较中的第i次
     if(a[i]>=a[i+1])
     {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
     }
     for(b=0;b<n;b++)
     printf("%d ",a[b]);
}