#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,b;
    char c[1001];
    scanf("%d %d",&a,&b);
    scanf("%s",c);
    int n;
    n=strlen(c);
    int ten=0,A[11],B[11];
    int i=0,count=0;
    for(i=0;i<n;i++)
    {
        if(c[i]<='9'&&c[i]>='0')
        A[i]=c[i]-'0';
        if(c[i]<='f'&&c[i]>='a')
        A[i]=c[i]-'a'+10;            //字母也可以加减法，比如'f'-'a'='5';
    }                              
    int x=1,j,num=0;

   ten+=A[n-1];
   
    for(i=n-2;i>=0;i--)
    {
        num++;
        x=1;
        for(j=0;j<num;j++)
        { 
        x*=a;
        }
        ten+=A[i]*x;
    }
    i=0;
    int tmp=0;
        while(ten>0)
    {
        B[i]=ten%b;
        ten/=b;
        i++;
        tmp++;
    }
    char ch;
    for(i=tmp-1;i>=0;i--)
    {
        if(B[i]<=9&&B[i]>=0)
        {
           printf("%d",B[i]);
        }
        if(B[i]<16&&B[i]>=10)
        {
            ch=B[i]+'a'-10;
            printf("%c",ch);
        }
    }
}
