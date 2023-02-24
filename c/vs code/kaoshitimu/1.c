#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,a=0,n;
    char ch[100];
    scanf("%d",&n);                              //输入n
    scanf("%s",ch);                    //输入字符串（必须用%s！！！！否则会出错）（输入字符串用%s）（ch为数组名，也可以用&ch[0]
  while(ch[a]!='\0')                  //字符串实际长度总是为长度+1，因为最后一位一定是'0'(在数组中不会显示，储存在机器内会储存)
  {
        
     if(ch[a]=='I')
        {
             if(ch[a+1]!='\0'&&ch[a+1]=='V')  //下一位如果不是末尾位（'0')  并且  是V则sum加4
            {
                sum=sum+4;
                  a++;                        //因为如果出现IV，则占用了两个位，a+1跳过第二个位
            }
          else  if(ch[a+1]!='\0'&&ch[a+1]=='X')//道理同上，sum+9
          {
                sum=sum+9;
                 a++;
            }
            else{sum=sum+1;}                  //如果只有个I，则加一
        }
    else if(ch[a]=='V')                       //只出现V，加5
        {
            sum=sum+5;
        }
    else if(ch[a]=='X')                         //加10
        {
            sum=sum+10;
        }
      a++;                                      //一次循环结束，进行下一个字符的读取（已跳过占两个位的字符）
   
  }
        printf("%d",sum);

}
