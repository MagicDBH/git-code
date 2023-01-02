//对半查找
//已经升序排列，在n个数据中查找key
#include<stdio.h>
int main()
{
    int date[10]={1,2,3,4,5,6,7,8,9,10};
    int key=8,mid,star=0,end=9;
    char found=0;
    while (star<=end)                                  //利用循环反复使mid=(star+end)/2
    {
        mid=(star+end)/2;
        if(key==date[mid])
        {
            printf("found key %d at date[%d]",key,mid);
            found=1;                                   //定义found=1使下面的not found不成立
            break;
            return 0;
        }
        else if(key<=date[mid])
        end=mid-1;
        else if(key>=date[mid])
        star=mid+1;
    }
    if(!found)                                          //如果上述while循环不成立则ifound=1，输出下方字符
    printf("not found");

 }
    


