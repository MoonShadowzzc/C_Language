#include <stdio.h>

/* 一个整形变量的定义、赋值和输出 */

int main(void) 
{
	int a, b;
	a = 2147483647;
	b = a + 1;			// 溢出 
	printf("a = %d \nb = %d", a, b);
	  
	return 0;
}
