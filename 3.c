#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,c[10000],i,b,d,j=1;
    scanf("%d %d",&n,&a);
    for(i=0;i<n;i++)
    scanf("%d",&c[i]);
    for(i=0;i<n-1;i++)
   { b=c[i+1]-c[i];
    d=fabs(b);
    if(d>a)
    {printf("No");
    j=0;
    break;}
   // else if(fabs(c[n-1]-c[n-2])<a)
  // { printf("Yes");
  // break;}
    }
    if(j==1)
    printf("Yes");
}