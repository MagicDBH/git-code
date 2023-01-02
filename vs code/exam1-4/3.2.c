#include<stdio.h>
int main()
{
    int ping=0,gai=0,qian,jiu=0,a,b,n;
    scanf("%d",&qian);
    n=qian/2;
    jiu+=n;
    ping=ping+jiu;
    qian=qian%2;
    gai=gai+jiu;
    do{
        a=ping/2;
        b=gai/4;
        jiu+=(a+b);
        ping%=2;
        ping+=(a+b);
        gai%=4;
        gai+=(a+b);

    }while(gai>=4||ping>=2);
    printf("%d %d %d %d",jiu,ping,gai,qian);
    
    

}