/* 函数返回值--用return返回 */
#include <stdio.h>
int myadd1(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
} 

void main()
{
	int a = 1, b = 2, c = 0;
	c = myadd1(a, b);
	printf("%d + %d = %d", a, b, c);
}
