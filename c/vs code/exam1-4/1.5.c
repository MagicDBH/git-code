#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    a=3.0/4+103%3;
    b=floor(3.8);
    c=floor(-3.8);
    d=ceil(3.2);
    e=ceil(-3.2);
    printf("%f\n%f\n%f\n%f\n%f",a,b,c,d,e);
}