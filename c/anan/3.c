#include <stdio.h>
int main()
{
    int a[100]={0},n;
    scanf("%d",&n); //输入一个n
    for(int i=0;i<n;i++)  //在i<n时输入数据赋给a数组中，未赋值的a[i]=0；
    scanf("%d",&a[i]);
    int b=0;
    for(int i=0;i<n;i++)
    if(a[i]%10==6)  //a/10余数是6
    b++;            //有一个满足条件则b+1
    printf("%d",b);
    return 0;
}
