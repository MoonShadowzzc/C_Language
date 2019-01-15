/* 动态存储变量和静态存储变量 */
#include <stdio.h>
int myfun();
void main()
{
	int i=0, a=0;
	for(i=1; i<=2; i++)
	{
		a = myfun();
		printf("%4d", a);
	}
} 
//   6   8
int myfun()
{
	auto int x=1;	// 动态存储变量 
	static int y=1;	// 静态存储变量 
	x = x + 2;
	y = y + 2;
	return x+y;
}
