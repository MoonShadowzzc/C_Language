#include <stdio.h>
/* 输入一个三位数，计算其每一位数字的和*/
void main()
{
	int n=0,a=0,b=0,c=0,sum=0;
	printf("Input N: ");
	scanf("%d", &n);
	a = n/100;
	b = n%100/10;
	c = n%10;
	sum = a+b+c;
	printf("n=%d,sum=%d",n,sum);
}
