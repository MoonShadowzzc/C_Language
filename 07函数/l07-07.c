/* 使用自编函数交换两个变量的值--直接传参无法实现交换 */
#include <stdio.h>
void mySwap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void main()
{
	int x = 3, y = 5;
	printf("before: x=%d, y=%d\n", x, y);
	mySwap(x, y);
	printf("after : x=%d, y=%d", x, y);
}
