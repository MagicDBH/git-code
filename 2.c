#include<stdio.h>
int main()
{
    int x[10000],a,b,s,n,i,c;
    scanf("%d",&n);
    scanf("%d",&s);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(a=0;a<n;a++)
      {
        for(b=(a+1);b<n;b++)
    
      {
      c=x[a]+x[b];
      if(c==s)
      { printf("%d %d",a,b);
       break;}
      
      }
      if(c==s)
      break;
      }
    

        
}