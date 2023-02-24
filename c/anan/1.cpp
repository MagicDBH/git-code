#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;               //输入a（总数量）
    cin>>b;                //输入b（分成的份数）
    c=a/b;                 //a/b结果（结果取整，小数忽略
    d=a%b;                // %的取余运算
    cout<<c<<" "<<d<<endl; //输出结果，空格用“”隔开
}

