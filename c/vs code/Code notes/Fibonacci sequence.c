//斐波那契数列（可能程序不太对，记住思路）
//递归思路
#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&n);
    unsigned long long f[10000];
    f[0]=1;
    f[1]=1;
    for(i=2;i<=n;i++)
    f[i]=f[i-1]+f[i-2];
    printf("%llu",f[n-2]);
}