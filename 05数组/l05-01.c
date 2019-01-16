/* 一维数组的定义和引用 */
#include <stdio.h>
#define N 10		// 常量定义 

void main()
{
	int i, a[3];	// 定义变量i,数组a 
	double b[N];	// 定义数组b 
	
	a[0] = 2; 
	a[1] = 4; 
	a[2] = a[0] + a[1];	// 给数组a赋值
	
	for(i=0; i<N; i++)
	{
		printf("Input b[%d]:", i);
		scanf("%lf",&b[i]);	// 录入b的每一个值 
	} 
	printf("%d, %d, %d\n", a[0], a[1], a[2]); 
	for(i=0; i<N; i++)
	{
		printf("%.0lf,", b[i]);
	}
	printf("\n");	
} 
