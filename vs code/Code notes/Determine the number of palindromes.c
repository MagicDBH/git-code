//回文数字确定
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,a;
    char c[1000],b[1000];
    scanf("%s",c);
    n=strlen(c);
    for(i=0,j=n-1;i<n;i++,j--)
    b[j]=c[i];
    for(i=0;i<n;i++)
    {
        if(b[i]!=c[i])
        break;
    }
    if(i==n)
    printf("Yes");
    else
    printf("No");


}