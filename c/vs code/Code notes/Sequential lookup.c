//顺序查找
#include<stdio.h>
int main()
{
    int date[7]={1,2,3,4,5,6,7};
    int key=3,i;
    char found=0;
    for(i=0;i<=6;i++)
       if(key==date[i])
       {printf("found%d at the%d",key,i);
       found=1;
       break;}
  if(!found)
  printf("can not found");
  
}