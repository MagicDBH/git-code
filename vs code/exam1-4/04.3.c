#include<stdio.h>
#include<math.h>
int n;
int fun(int y[])
{
	int i;
	for(i=0;i<n;i++)                    
		{if(y[i]!=1)
	   {y[i]=1;  
       return y[i]=1;}
	    else y[i]=0;}
	   
     
}

int main()
{
	int w[100],v[100];
	int i,j,C;
	int curweight=0,curvalue=0,curvalue1=0,curweight1=0;
	int x[100]={0},y[100]={0};
	scanf("%d %d",&C,&n);
	for(i=0;i<n;i++)
	scanf("%d",&w[i]);
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	for(j=1;j<=pow(2,n);j++)
	{
		fun(y);
		for(i=0;i<n;i++)
		{
			curweight+=w[i]*y[i];
		    curvalue+=v[i]*y[i];
		} 
		if(curweight<=C&&curvalue>curvalue1)
	    {
		    curvalue1=curvalue;
		    curweight1=curweight;
		    for(i=0;i<n;i++)
		    {
			   x[i]=y[i];
		    }
	    }
	    curweight=0;
	    curvalue=0;
	}
	
	for(i=0;i<=n;i++){
		if(x[i]==1)
		printf("%d ",i+1);
        else if(x[i]==0)
        continue;
	}
	printf("%d %d",curweight1,curvalue1);
}
