#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int nn,ii,aa=0,bb=0,cc=0;      //定义初始量
    scanf("%d",&nn);              //输入的nn个数
    for(ii=0;ii<nn;ii++)
    {
        int i,x,m,b[4];
        char a[100];               //定义100个字符组成字符串
        b[0]=0;b[1]=0;b[2]=0;b[3]=0;
        scanf("%s", a);           //输入字符串，保存在a数组中
        x=strlen(a);              //x等于a字符串的长度
        if(x>=6) 
        {
            for(i=0;i<=x-1;i++)
            {
                if(48<=a[i]&&a[i]<=57)   //判断字符是数字
                    b[0]=1;
                else if(65<=a[i]&&a[i]<=90) //判断字符是大写字母
                    b[1]=1;
                else if(97<=a[i]&&a[i]<=122)//判断字符是小写字母
                    b[2]=1;
                else                //判断字符是其他字符
                    b[3]=1;
            }
        }
        m=b[0]+b[1]+b[2]+b[3];//求这些数的和
        switch(m)
        {
            case 0: printf("%s is Not Safe\n",a);aa++;break;//密码位数小于6，并让aa加一
            case 1: printf("%s is Not Safe\n",a);aa++;break;//只用到一类字符，aa+1
            case 2: printf("%s is Medium Safe\n",a);bb++;break;//2  bb+1
            case 3: printf("%s is Safe\n",a);cc++;break;//3  cc+1
            case 4: printf("%s is Safe\n",a);cc++;//4  dd+1
        }
    }
    if(aa>bb && aa>cc) printf("Not Safe More\n");
    if(bb>aa && bb>cc) printf("Medium Safe More\n");
    if(cc>bb && cc>aa) printf("Safe More\n");
    return 0;
}
