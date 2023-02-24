#include <stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
    float a,b,c,d;
    a=(1-cos(PI/3))/2;
    c=sqrt(a);
    b=(sin(PI/4))*(sin(PI/4))+(sin(PI/4))*(cos(PI/4))-(cos(PI/4))*(cos(PI/4));
    printf("%f\n%f",c,b);
}