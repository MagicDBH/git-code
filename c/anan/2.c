int main()
{
    int a;
    scanf("%d", &a);
    if(a%2==0)                         //除以2余数为0
        printf("%d is even number\n",a);
    else                              //其他情况
        printf("%d is odd number\n",a);
    return 0;
}
