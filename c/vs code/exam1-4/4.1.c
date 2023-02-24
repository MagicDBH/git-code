#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3],b[3][3];
	int i,j,count1=0,count2=0,count3=0,count4=0;
	 for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
	    {
		scanf("%d",&a[i][j]);                //for循环输入矩阵，矩阵初始化时已被定义，行和列可以由输入n，m确定
		}                                    //形如  for(i=0;i<n;i++) 
	   printf("\n");                                 //for(j=0;j<m;j++)通过更改n，m的值从而改变矩阵的行数和列数
  	 for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
	 scanf("%d",&b[i][j]);
	 int c1[3][3],c2[3][3],c3[3][3],c4[3][3];  //定义结果矩阵，结果矩阵需提前定义才可以使用
//把加法减法乘法转置都分开，不然会出错
	 for(i=0;i<=2;i++)                         //for循环计算
	   for(j=0;j<=2;j++) 
	   c1[i][j]=a[i][j]+b[i][j];             //加法
	   for(i=0;i<=2;i++)                      //for循环输出
	   for(j=0;j<=2;j++)
	   {printf("%d \t",c1[i][j]);            //输出加法结果矩阵
	   count1++;                              //利用每次循环一个数的+1，使得第第三次循环时换行
	   if(count1%3==0)                      //循环到第三次时换行
	   printf("\n");}
       printf("\n");

   for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
	 c2[i][j]=a[i][j]-b[i][j];             //减法同加法
    for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
		{printf("%d \t",c2[i][j]);
	   count2++;                          //换行
	   if(count2%3==0)
	   printf("\n");}
	   printf("\n");

	   for(i=0;i<=2;i++)
	   for(j=0;j<=2;j++)
	{
	   c3[i][j]=0;                       //初始化，不用加int
	   for(int k=0;k<=2;k++)
	   c3[i][j]+=a[i][k]*b[k][j];          //乘法，需要累加
	}
	   for(i=0;i<=2;i++)
	   for(j=0;j<=2;j++)
	   {printf("%d \t",c3[i][j]);
	   count3++;
	   if(count3%3==0)
	   printf("\n");}
       printf("\n");

  for(j=0;j<=2;j++)
	   for(i=0;i<=2;i++)
	   c4[j][i]=a[i][j];               //转置，直接c[j][i]=a[i][j]即可
	   for(i=0;i<=2;i++)
	   for(j=0;j<=2;j++)
	   {printf("%d \t",c4[i][j]);
	   count4++;
	   if(count4%3==0)
	   printf("\n");}
	  
	   }