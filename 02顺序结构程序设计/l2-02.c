#include <stdio.h>
/* 从键盘输入三个数并分别存入a,b,c中，求他们的平均值  */
void main()
{
	double a=0,b=0,c=0,avg=0;
	
	printf("Input a, b, c:");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("a=%lf, b=%lf, c=%lf\n", a, b, c);
	avg = (a+b+c)/3;
	printf("avg = %le",avg);
 } 
