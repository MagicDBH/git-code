#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,n;
    double sum=0,b,c=1,d,e=1;
    scanf("%d",&n);
    double PI;
    double r;
    r=c*(1/e);
    b=1/e;
    d=pow(10,-n);
    while(b>d)
    {   
    r=c*(1/e);
        sum+=r;
        i++;
        c=-c;
        e+=2;
        b=1.0/e;
    }
    PI=(4.0*sum);
    printf("%lf",PI);

}