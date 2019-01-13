/* 编写输出如下分段函数值的程序，要求整数x的值从键盘输入 */
	//	  | x-2,	x < 0	
	//	  | 1,	x = 0
	//y = | 2x,	0 < x <=3
	//	  | x/3,	x > 3
#include <stdio.h>
void main()
{
	int x = 0;
	double y = 0.0;
	
	printf("Input x:\n");
	
	scanf("%d", &x);
		
	if(x < 0)	
		y = x -2;
	if(x == 0)	
		y = 1;
	if(0 < x && x <=3) 	
		y = 2*x;
	if(x >3)	
		y = x/3.0;
	printf("x = %d, y = %lf\n", x, y);
} 
