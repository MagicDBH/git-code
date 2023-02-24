#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m); //输入n（总数量）输入m（分成的份数）
    printf("%d %d\n",n/m,n%m);//   n/m结果（结果取整，小数忽略）// %的取余运算
    return 0;
}
