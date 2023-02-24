#include <stdio.h>
void fun(int *x,int y)
{
    if(y<=10)
    *x=*x/2;                          //函数表示，输入的后者如果<=10，则前者除以二
}                                  //声明一个函数 其中*x表示一个地址
int main()               
{
    int charge,days;
    scanf("%d%d", &charge,&days);  //输入两个数，charge和days
    fun( &charge, days );         //将charge的地址赋给*x，days赋给y，并运行函数
    printf("%d\n", charge);
    return 0;
}

