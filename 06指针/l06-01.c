/* 指针变量的定义和引用 */
#include <stdio.h>
void main()
{
	int a = 0;
	int *p;		// 指针的定义 变量名为p 
	p = &a;		// 将a的地址赋给 p 
	*p = 5;     // *p 和a 是等价的 
	printf("a = %d", a);
}
