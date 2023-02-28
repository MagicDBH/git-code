#include<iostream>
using namespace std;
int fib(int a)
{
    if(a==1)
    return 0;
    return 1+fib(a-1);
}
int main()
{
    int a=30,b;
    b=fib(a);
    cout<<b<<endl;
}