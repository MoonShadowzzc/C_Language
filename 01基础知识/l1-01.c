#include <stdio.h>			// 包含头文件 标准输入输出 
#include <math.h> 			// 数值计算 

/* 一个完整的C语言程序示例 */

int mysum(int m, int n);	// 函数声明 

int main(void) 				// 主函数头 
{
	int a, b, x;			// 变量声明 
	double c, y, z;			 
	
	c = 4.0;				// 变量赋值 
	y = sqrt(c);
	a = 10;
	b = 20;
	
	x = mysum(a, b);
	z = x + y;
	
	printf("z = %lf\n", z);	// 输出 
	return 0; 				// 主函数返回 
}

int mysum(int m, int n)		// 函数定义 
{
	int k = 0, i;
	 
	for(i=m; i<=n; i++)		// 循环 
		k = k + 1;
	return k; 
}

