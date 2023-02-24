#include<stdio.h>
int main()
{
    int n,c;
    char str[1000][1000];          //多重字符数组，第一个[]里的数代表有几个字符数组，第二个[]里数字为每个字符串预留内存空间
    scanf("%d",&n);
    getchar();                     //（就是这一行的代码）需要读取输入5之后回车的缓存，否则会只能输入n-1行字符串，有一行被空格（回车）占据
    for(int i=0;i<n;i++)
    {scanf("%[^\n]",str[i]);        //输入n个字符串   （str[i]在这里是地址，指向&str[i][1000]）
    getchar();}                     //每次输入完读取掉回车
    for(int i=0;i<n;i++)
    printf("%s\n",str[i]);          //输出第i行字符串
}