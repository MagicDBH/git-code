#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[102];
    int i,left=1,right=0;
    scanf("%s",a); 
    if((a[0]==')')||(n%2!=0))
    printf("No");
    else
    {
        for(i=1;i<n;i++)
        {
            if(a[i]==')')
            right++;
            if(a[i]=='(')
            left++;
            if(right>left)
            {
                printf("No");
                break;
            }
            else if((i==(n-1))&&(right==left))
            {
                printf("Yes");
            }
            else if((i==(n-1))&&(right<left))
            {
                printf("No");

            }
        } 
    }
    return 0;
}