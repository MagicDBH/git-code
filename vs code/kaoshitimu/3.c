#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    int x[100],y[100];                //冒泡排序，（小于等于）可以换位置
    scanf("%d",&n);                   //通过大小比较，让数据趋于有序数列
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);  //输入
    for(b=0;b<n;b++)                  //第b趟比较 
     for(c=0;c<n-b-1;c++)             //第b趟比较中两两比较n-b-1次（注意这里c从0开始，所以实际上比较了n-b次）
     if(x[c]>=x[c+1])                 //每趟比较实际上是一个数的慢慢移到最右端的过程，共需n趟，每趟中都有n-b次(程序中需要n-b-1)
  {
     d=x[c];                        //递归赋值
     x[c]=x[c+1];
     x[c+1]=d;
  }
     for(int i=0;i<n;i++)
     printf("%d ",x[i]);
}