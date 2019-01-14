/* 函数返回值--不使用return */
#include <stdio.h>
int myadd2(int x, int y, int *p)
{
	*p = x + y;
} 

void main()
{
	int a = 1, b = 2, c = 0;
	myadd2(a, b, &c);
	printf("%d + %d = %d", a, b, c);
}
