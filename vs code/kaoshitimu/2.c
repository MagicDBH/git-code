#include<stdio.h>
#include <math.h>
int main()
{ 
  float j;
  int n,k;
  int p=0;
scanf("%d",&n);
    float v[100];                     //定义一个数组(不要定义动态数组，直接定义100个数可以用就行)
    for(int i=0;i<=n-1;i++)           
    scanf("%f",&v[i]);                //输入数组，从i=0到n-1，未被定义的数组可以忽略
for(k=0;k<=n-1;k++)                   //抽取定义数组中的v[k]
{
  j=sqrt(v[k]);                       //计算v[k]的平方根，赋值给j
if(j-(int)j==0)                       //如果j==v[k]的平方根，让p+1，最后p的值就是可以完全平方数的个数
p=p+1;
}
printf("%d",p);
}
