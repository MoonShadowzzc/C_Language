/* 带参数的#define命令 */
#include <stdio.h>
#define MAX(x,y) (x > y) ? x : y

void main()
{
	int a=2, b=3, c=0;
	c = MAX(a,b);
	printf("c=%d", c);
}
