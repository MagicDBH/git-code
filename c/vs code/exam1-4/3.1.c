#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,Z,i;
    scanf("%d %d %d",&X,&Y,&Z);
    for(i=1;;i++)
    {
        if(((i%3)==X)&&((i%5)==Y)&&((i%7)==Z))
        break;
    }
    printf("%d",i);

    
}