/* 给指针变量赋值（运行程序时，从键盘输入1.0） */
#include <stdio.h>
void main()
{
	double a = 0, b = 6.0;
	double *p = NULL, *q = NULL;
	p = &a;
	printf("Input data:");
	scanf("%lf", p);		// 3.0		a = 3.0
	
	*p = *p + 2; 			// 3.0 + 2	a = 5.0
	q = p;					// 
	p = &b;
	printf("%lf, %lf", *p, *q);
}
