//矩阵转置
//矩阵m*n已被定义，a矩阵元素输入，转置为b矩阵后输出
#include<stdio.h>
#include<math.h>
int main()
{
    int a[2][3];
    int count=0;
    for(int i=0;i<=1;i++)
     for(int j=0;j<=2;j++)
     scanf("%d",&a[i][j]);
    for(int i=0;i<=1;i++)
     for(int j=0;j<=2;j++)
    {
    printf("%d ",a[i][j]);
    count++;
    if(count%3==0)
    printf("\n");
    }
    int b[3][2];
    int count2=0;
    for(int i=0;i<=1;i++)
     for(int j=0;j<=2;j++)
      b[j][i]=a[i][j];               //转置   b以a的列j在前，a的行i在后，a顺序不变（赋值转置）
    for(int i=0;i<=2;i++)
     for(int j=0;j<=1;j++)
     {
        printf("%d ",b[i][j]);   
        count2++;
        if(count2%2==0)
        printf("\n");
     }
}