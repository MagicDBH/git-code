#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c,d,i;
    scanf("%d",&n);
    char v[100];              //定义数组
    scanf("%s",v);            //输入字符串一定要%s！！！！输入时两个字符之间不要加空格，因为空格也属于字符
    int left=0,right=0;       //定义左右括号的初始值（等价代换思想，抽象变具体，与颜色分类思路相同）
    if(v[0]==')'||n%2!=0)     //如果刚开始就是右括号则之间停止，输出No，如果为奇数个，也之间No
    printf("No");             // No和Yes大小写严格要求          
    else
    {
        for(i=0;i<n;i++)
        {
            if(v[i]=='(')
            left++;
            else if(v[i]==')')
            right++;        //具象化
        if(left<right)      //如果直接出现右括号数量大于左括号则直接No，（不能左括号大于右括号就停止）
      {  printf("No");
        break;}
        if(i==(n-1)&&left>right)//当读取完字符串时如果左括号还大于右括号，输出No
        {printf("No");break;}
        else if(i==(n-1)&&left==right)//读取完字符串后括号相等，输出Yes
        {printf("Yes");
        break;}
        }
    }
}