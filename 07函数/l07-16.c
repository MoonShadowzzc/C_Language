/* 内部变量和外部变量 */
#include <stdio.h>
int a = 100, b = 10;	// a,b定义在变量外部，亦称全局变量
void main()
{
	int a = 1, c = 0;	// a在两处定义，此处a是内部变量，亦称局部变量 
	c = a + b;			// c = 1 + 10, a使用内部变量，b使用外部变量(变量使用就近原则)
	printf("%d", c);	// 11 
	{
		int a = 2, b = 2;	// 复合语句内部变量
		c = a + b;			// c = 2 + 2
		printf("%d",c);	 
	} 
	printf("%d", a + b);	// 1 + 10
} 


