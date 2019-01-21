/* 间接运算符*  vs 取地址运算符& */
#include <stdio.h>
void main() 
{
	int a = 0; 
	int *p = NULL;	// 当*紧跟在类型后面是说明符
	int *q = &a; 	// 声明时初始化
	p = &a;			// 只有指针变量才能存放某变量的地址
	*p = 5;			// 间接操作符，可以通过*p直接访问a
	printf("%d, %d, %d\n", *p, *q, *(&a));
	printf("%x, %x, %x\n", &a, &(*p), p) ;
}
