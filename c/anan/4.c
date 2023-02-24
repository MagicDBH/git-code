#include <stdio.h>
int main()
{
    int n,a[50],i,max,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];                    //令a数组首位赋给max
    for(i=0;i<n;i++)
    {
        if(a[i]>max)                //如果接下来有a里的值大于目前最大的max则将此最大值替换掉max形成新的最大值
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(max-a[i]);         //将每个数被最大值减去后的差相加
    }
    printf("%d\n",sum);
    return 0;
}
