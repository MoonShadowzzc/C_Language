/* 任意输入两个整数存放在a，b中，输出时保证a中的值，不比b中的大 */
#include <stdio.h>
void main()
{
	int a = 0, b = 0, t = 0;
	printf("Input a, b:");
	scanf("%d,%d", &a, &b);
	if (a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	printf("a = %d, b = %d", a, b);
}
