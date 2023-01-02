#include <stdio.h>
#include<math.h>
int main()
{
   short a;
   int b;
   long c; 
   long long d;
   unsigned int e;
   scanf("%hd\n%d\n%ld\n%lld\n%u",&a,&b,&c,&d,&e);
   printf("%d\n%u\n%o\n%X\n%X",a,b,c,d,e);
}