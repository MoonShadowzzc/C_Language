/* 逻辑运算--偷懒规则 */
#include <stdio.h>
void main()
{
	int a = 1, b = 0;
	printf("%d", 0 && (a = 2));	// 0为‘假’，不执行a=2
	printf("a=%d", a);			// a=1
	printf("%d", 5 && (a = 2));	// 5为‘真’，执行a=2
	printf("a=%d", a);			// a=2
	
	b = 1;
	printf("%d", 5 || (b = 2));	// 5为‘真’，不执行b=2
	printf("b=%d", b);			// b=1
	printf("%d", 0 || (b = 2));	// 0为‘假’，执行b=2
	printf("b=%d", b);			// b=2
}
