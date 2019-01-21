/* 指针变量的定义和引用 */
#include <stdio.h>
void main()
{
	int a = 0;
	int *p;
	p = &a;
	*p = 5;
	printf("a = %d", a);
} 
