#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];	// 城市名称
    int gdp;			// GDP数量
}CITY;                //定义结构体




int main()
{
    CITY town[100], temp;
    int n, i, j;
    int temp1;
    char temp2[20];

     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",town[i].name,&town[i].gdp);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)                   //冒泡排序，记住就行
            if(town[j].gdp<town[j+1].gdp)
            {
                temp1=town[j].gdp;
                strcpy(temp2,town[j].name);
                town[j].gdp=town[j+1].gdp;
                strcpy(town[j].name, town[j+1].name);
                town[j+1].gdp=temp1;
                strcpy(town[j+1].name, temp2);
            }
    }



    for(i=0;i<n;i++)
        printf("%s %d\n", town[i].name, town[i].gdp);
    return 0;
}
