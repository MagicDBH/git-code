#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    if(0<=x<=10)
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
          printf("%d*%d=%d\t",j,i,i*j);
        printf("\n");
    }
}
