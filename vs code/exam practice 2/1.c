#include<stdio.h>
int main()
{
    int a[101][1001];
    int m,n,c;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)   //第几行比较
    for(int e=0;e<n;e++)   //第几行的第几趟比较
    for(int j=0;j<n-e-1;j++)//第几次比较（第几个数比较）
    if(a[i][j]>=a[i][j+1])
    {
        c=a[i][j];
        a[i][j]=a[i][j+1];
        a[i][j+1]=c;
    }
    
}