#include <stdio.h>
#include <string.h>
int main()
{
  int a,b,i=0,j=0,n1=0,x=0,n2=0;
  double s1=0,s2=0;
  char c[11]={0},d[51]={0};
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%s", &c);
  while(c[x] != '.' &&x<50)
  {  
    x++;
  }
  if(c[x]=='.')
  {
    for(i=0;i<x;i++)
	{            
      n1=n1*a;
      if(c[i]=='a'||c[i]=='b'||c[i]=='c'||c[i]=='d'||c[i]=='e'||c[i]=='f')
	  {
        n1=n1+(c[i]-'a'+ 10);
      }
      else
	  {
        n1=n1+(c[i]-'0');
      }
    }
    for(i=strlen(c)-1;i>x;i--)
	{      
      if(c[i]=='a'||c[i]=='b'||c[i]=='c'||c[i]=='d'||c[i]=='e'||c[i]=='f')
	  {
        s1=s1+(c[i]-'a'+10);
      }
      else
	  {
        s1=s1+(c[i]-'0');
      }
      s1=s1/a;
    }
  }

  else
  {
    for(i=0;i<strlen(c);i++)
	{      
      n1=n1*a;
      if(c[i]=='a'||c[i]=='b'||c[i]=='c'||c[i]=='d'||c[i]=='e'||c[i]=='f')
	  {
        n1=n1+(c[i]-'a'+10);
      }
      else
	  {
        n1=n1+(c[i]-'0');
      }
    }
  }
  if(n1==0)
  {       
    d[j]='0';
    j++;
    n2++;
  }
  while(n1)
  {                
    if(n1%b>9)
	{
      d[j]='a'-10+n1%b;
    }
    else
	{
      d[j]=n1%b+'0';
    }
    n1=n1/b;
    j++;
    n2++;
  }

  while(j<=50&&s1!=0.0)
  {               
    s2=s1*b;
    if(s1*b>9)
	{
      d[j]='a'-10+s2;
    }
    else
	{
      d[j]=s2+'0';
    }
    s1=s1*b-s2;
    j++;
  }

  for(i=n2-1;i>=0;i--)
  {     
      printf("%c",d[i]);
  }
  if(c[x]=='.')
  {     
    printf(".");
    if( j<(n2+8))
    {
       for(i=n2;i<j;i++)
	{     
    printf("%c",d[i]);
    }
    }
    else
    {
        for(i=n2;i<n2+8;i++)
	{     
    printf("%c",d[i]);
  	}
    }
  }
}
