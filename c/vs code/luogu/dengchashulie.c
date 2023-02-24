#include<stdio.h>
int main()
{
	long long a1,a2,d,S;
	long long n;
	scanf("%lld %lld %lld",&a1,&a2,&n);
	d=a2-a1;
	S=a1*n+n*(n-1)*d/2;
	printf("%lld",S);
	return 0;
 }

