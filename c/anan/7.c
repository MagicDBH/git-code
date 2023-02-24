#include <stdio.h>
int fun(int score[100],int flower[100],int n) //定义函数
{
    int i,cnt=0;                     
    for(i=0;i<n;i++)
    {
        if(score[i]>=80)                 //分数>=80，则给花的可能性为1
            flower[i]=1;
        else
            flower[i]=0;            //否则为0
}
for(i=0;i<n;i++)
{
   if(flower[i]==1)
     cnt++;                     //如果可能给花，则计一个数，相加
}
return cnt;
}

int main()
{
    int score[100],flower[100],cnt;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&score[i]);
    cnt=fun(score,flower,n);
    for(i=0;i<n;i++)
        printf("%d ",flower[i]);
printf("\n");
printf("%d\n",cnt); 
    return 0;
}
