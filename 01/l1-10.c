#include <stdio.h>
/* 实型变量的定义赋值和输出 */
void main()
{
	float a = 12.3, b = 0.0;
	double c = 12345.67;
	
	b = 12345.67;
	printf("a=%f, b=%f, c=%lf\n", a, b, c);
	// a=12.300000, b=12345.669922, c=12345.670000
	// float定义能保证6位有效数字
	// double 定义能保证15位有效数字 
} 
