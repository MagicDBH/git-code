#include<iostream>
using namespace std;
int maxl(int a,int b)
   {
    if(a>b)
    return a;
    else 
    return b;
   }
   int maxl(int a,int b,int c)
    {
      if(a>b&&a>c)
      return a;
     else  if(b>a&&b>c)
      return b;
      else
      return c;
    }
    float maxl(float a,float b)
    {
        if(a>b)
        return a;
        else  
        return b;
    }
    float maxl (float a,float b,float c)
    {
        if(a>b&&a>c)
        return a;
        else if(b>a&&b>c)
        return b;
        else
        return c;
    }
int main()
{
   int a=10,b=20,c=30,d1,d2;
   d1=maxl(a,b,c);
   d2=maxl(a,b);
   float a1=10.1,b1=20.1,c1=30.1,d3,d4;
   d3=maxl(a1,b1);
   d4=maxl(a1,b1,c1);
   cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<endl;
}